#include"head.h"
//初始化 
void new_bread(char bread[ROW][COL],int row ,int col)
{
	int i=0,j=0;
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
  	bread[i][j]=' ';
  }
  }	
} 
//棋盘 
void printbread(char bread[ROW][COL],int row ,int col)
{
	int i=0,j=0;
  for(i=0;i<row;i++){
  	for(j=0;j<col;j++){
  		printf(" %c ",bread[i][j]);
  		if(j<col-1)
  		printf("|");
	 }
	  printf("\n");
	  
	  if(i<row-1){
	for(j=0;j<col;j++){
  		printf("---");
  		if(j<col-1)
  		printf("|");
	 }
	  printf("\n"); } 
  }		
}
//玩家走 
void people_move(char bread[ROW][COL],int row ,int col){
    int x=0,y=0;
   printf("玩家走\n");
   printf("请输入坐标(空格隔开)：\n");
   while(1){
   
   scanf("%d%d",&x,&y);
   if(x>0&&x<=row&&y>0&&y<=col)
   {
   	if(bread[x-1][y-1]==' '){  
  	bread[x-1][y-1]='#';
  	
   	break;
	   }
	else printf("该坐标已被下过！请重新输入！\n");
   }
   else printf("请输入正确坐标！\n");
   }
}
//电脑走 
void computer_move(char bread[ROW][COL],int row,int col){
	printf("电脑走：\n");
	while(1){

	  int x=0,y=0;
	  x=rand()/row;
	  y=rand()/col;
	  if(x/10==1){
	  	x=2;
	  	y=2;
	  }
//     if(x>0&&x<=row&&y>0&&y<=col&&bread[x-1][y-1]!='#')
//   {
//   	
//   		int i=0;int j=0;
//	for(i=0;i<row;i++)
//	{
//   		if(bread[i][0]==bread[i][1]||bread[i][1]==bread[i][2]&&bread[i][0]!=' ')
//      { 
//	  for(j=0;j<col;j++){
//	 
//      	if(bread[i][j]!='#')
//      	  {  
//      	  bread[i][j]='*';
//      	  break;
//			}
//		   }
//		   break;
//	  }
//	 if(bread[0][i]==bread[1][i]||bread[1][i]==bread[2][i]&&bread[0][i]!=' ')
//      {
//      for(j=0;j<col;j++){
//	 
//      	if(bread[j][i]!='#')
//      	  {  
//      	  bread[i][j]='*';
//      	  break;
//			}
//		   }
//		   break;
//	  }	
//      } 
	  
   	if(bread[x-1][y-1]==' '){  
  	bread[x-1][y-1]='*';
 	break;
	}	
  	//	}
  }
}
int isfull(char bread[ROW][COL],int row,int col)
{
   int i=0,j=0;
   for(i=0;i<row;i++)
   for(j=0;j<col;j++){
   
   {
   	if(bread[i][j]==' ')
	   return 0;
   }
   	}
   return 1;
}
char PanDuan(char bread[ROW][COL],int row,int col) {
	int i=0;int j=0;
	for(i=0;i<row;i++){
	if(bread[i][0]==bread[i][1]&&bread[i][1]==bread[i][2]&&bread[i][0]!=' ')
      {
      	return bread[i][0];
	  }
	if(bread[0][i]==bread[1][i]&&bread[1][i]==bread[2][i]&&bread[0][i]!=' ')
      {
      	return bread[0][i];
	  }	
		}
    if(bread[0][0]==bread[1][1]&&bread[1][1]==bread[2][2]&&bread[0][i]!=' ')
      {
      	return bread[0][0];	
      }
   	if(bread[0][2]==bread[1][1]&&bread[1][1]==bread[2][0]&&bread[0][i]!=' ')
      {
      	return bread[0][2];	
      }
      int re=isfull(bread,ROW,COL) ;
    if(re==1)
	{
    	return 'P';
	}
	return 'C';
}
//void new_bread(char bread[ROW][COL],int row ,int col); 
void game(){ 
 char ret ; 
 char bread[ROW][COL]={0};
     //初始化棋盘
  new_bread(bread,ROW,COL);
     //打印棋盘 
  printbread(bread,ROW,COL); 
    //下棋
    while(1){
    	srand((unsigned int)time(NULL));
   //玩家走 
   
  people_move(bread,ROW,COL); 
  printbread(bread,ROW,COL);
  ret=PanDuan(bread,ROW,COL);
  if(ret!='C')
  {
  	break;
  }
  //判断
   // #代表玩家赢 *代表电脑赢  P代表平局 C代表继续 
  //电脑走 
  computer_move(bread,ROW,COL);
  printbread(bread,ROW,COL);
  ret=PanDuan(bread,ROW,COL);
   if(ret!='C')
  {
  	break;
  }
		}
  if(ret=='#')
  {
  	printf("玩家赢！\n");
  }
   if(ret=='*')
  {
  	printf("电脑赢！\n");
  }	
   if(ret=='P')
  {
  	printf("平局！\n");
  }	
}
void test(){ 
		int input=0;
   	
	 do {
	 	printf("#######################\n");
	 	printf("####1. 开始 2. 退出####\n");
	 	printf("#######################\n");
	    printf("请输入选择：");
	 	scanf("%d",&input);
	 	switch(input)
		 {
	 		case 1: 
	 		  printf("游戏开始！\n");
	 		  game();
	 		  break;
	 		case 0:
	 		  printf("退出游戏！");
	 	      break;
			default:
			  printf("请正确输入！！"); 
			  break;
		 }
		 
	 }while(input);
}
main(){
  test();
}

