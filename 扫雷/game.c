#include "game.h"
//��ʼ�� 
void new_board(char board[ROWS][COLS],int row,int col,char can)
{   int i=0,j=0;
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	 board[i][j]=can;
}
//��ӡ���
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
//������
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
//�ݹ�
void expand(char mine[ROWS][COLS], int x, int y, char show[ROWS][COLS], int z)    //��չ����
{

    int i = -1;
    int j = -1;
    for (i = -1; i < 2; i++)      //�߽�
    {
        for (j = -1; j < 2; j++)
        {
            if (i != 0 || j != 0)      // �����ŵ��Լ�ע��˴����߼���ϵ
            {
                if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)     //x y�����Ƿ�Ϸ�
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
//ɨ��
void sart_lei(char lei[ROWS][COLS],char show[ROWS][COLS],int row ,int col)
{    
      int x=0;int y=0;int num=0;
	  int win=0;
	  //81-�׵����� 
      while(win<row*col-LEI)
	  {
	  printf("������Ҫ�򿪵�����(��������ո��������)��\n");
      scanf("%d%d",&x,&y);	
      num=round(lei,x,y);
	  if(show[x][y]==(num+'0'))printf("�˴��Ѿ��Ź���\n");
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
			printf("��Ϸ��������ȵ����ˣ�\n");
			board_show(lei ,ROW,COL);
			break; 
		}
	  }
	  else 
	  {
	  	printf("��������ȷ����!\n");
	  }
	}
	if(win==row*col-LEI) printf("��ϲ�㣡���׳ɹ�����\n");
}
