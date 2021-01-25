#include "game.h"
//初始化 
void new_board(char board[ROWS][COLS],int row,int col,char can)
{   int i=0,j=0;
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	 board[i][j]=can;
}
//打印表格
void board_show(char board[ROWS][COLS],int row,int col)
{  
   int i=0,j=0; 
   for (i=0;i<=row;i++) printf("--",i);
   printf("\n");
   for (i=0;i<=row;i++) printf("%d|",i);
   printf("\n");
  
   for (i=1;i<=row;i++) 
   {   printf("%d|",i);
   	for(j=1;j<=col;j++)
	   {
	   	printf("%c ",board[i][j]);
	   }
	   printf("\n");
   }
    for (i=0;i<=row;i++) printf("%d|",i);
   printf("\n");
   for (i=0;i<=row;i++) printf("--",i);
   printf("\n");
}
//设置雷
void set_lei(char board[ROWS][COLS],int row ,int col )
{ 
	int x=0;int y=0;int count =LEI;
	while (count)
	{	
	  x=rand()%row+1;
	  y=rand()%col+1;
	  if(board[x][y]=='0')
	  {
	  
	  board[x][y] ='1';
	  count--;
	  }
	}
} 
int round(char board[ROWS][COLS],int x ,int y)
{     int num=0;
		num=board[x-1][y-1]+board[x-1][y]
		  	    +board[x-1][y+1]+board[x][y-1]
		  	    +board[x][y+1]+board[x+1][y-1]
			 	+board[x+1][y]+board[x+1][y+1]
				 -8*'0';
				 return num;
}
//递归
void expand(char mine[ROWS][COLS], int x, int y, char show[ROWS][COLS], int z)    //扩展函数
{

    int i = -1;
    int j = -1;
    for (i = -1; i < 2; i++)      //边界
    {
        for (j = -1; j < 2; j++)
        {
            if (i != 0 || j != 0)      // 避免排到自己注意此处的逻辑关系
            {
                if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)     //x y坐标是否合法
                {
                    if (show[x + i][y + j] == '*'&&mine[x+i][y+j]!='1')
                    {

                        int count = round(mine, x + i, y + j);
                        if (count != 0)
                        {
                            show[x + i][y + j] = count + '0';
                            z++;
                        }
                        else
                        {
                            show[x + i][y + j] = ' ';
                            z++;
                            expand(mine, x + i, y + j, show, z);
                        }

                    }

                }
            }
        }
    }


} 
//扫雷
void sart_lei(char lei[ROWS][COLS],char show[ROWS][COLS],int row ,int col)
{    
      int x=0;int y=0;int num=0;
	  int win=0;
	  //81-雷的数量 
      while(win<row*col-LEI)
	  {
	  printf("请输入要打开的坐标(两个坐标空格隔开！！)：\n");
      scanf("%d%d",&x,&y);	
      num=round(lei,x,y);
	  if(show[x][y]==(num+'0'))printf("此处已经排过！\n");
      if(x>=1&&x<=9&&y>=1&&y<=9)
	  {
	  
	  	if(lei[x][y]=='0')
		  {
		  	show[x][y]='0'+num;
		  	if(show[x][y]=='0')show[x][y]=' ';
		  //	board_show(lei ,ROW,COL);
		    expand(lei,x,y,show,win);
            board_show(show,ROW,COL); 
            win++;
		  }
		else
		{   
			printf("游戏结束！你踩到雷了！\n");
			board_show(lei ,ROW,COL);
			break; 
		}
	  }
	  else 
	  {
	  	printf("请输入正确坐标!\n");
	  }
	}
	if(win==row*col-LEI) printf("恭喜你！排雷成功！！\n");
}
