#include"head.h"
//��ʼ�� 
void new_bread(char bread[ROW][COL],int row ,int col)
{
	int i=0,j=0;
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
  	bread[i][j]=' ';
  }
  }	
} 
//���� 
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
//����� 
void people_move(char bread[ROW][COL],int row ,int col){
    int x=0,y=0;
   printf("�����\n");
   printf("����������(�ո����)��\n");
   while(1){
   
   scanf("%d%d",&x,&y);
   if(x>0&&x<=row&&y>0&&y<=col)
   {
   	if(bread[x-1][y-1]==' '){  
  	bread[x-1][y-1]='#';
  	
   	break;
	   }
	else printf("�������ѱ��¹������������룡\n");
   }
   else printf("��������ȷ���꣡\n");
   }
}
//������ 
void computer_move(char bread[ROW][COL],int row,int col){
	printf("�����ߣ�\n");
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
     //��ʼ������
  new_bread(bread,ROW,COL);
     //��ӡ���� 
  printbread(bread,ROW,COL); 
    //����
    while(1){
    	srand((unsigned int)time(NULL));
   //����� 
   
  people_move(bread,ROW,COL); 
  printbread(bread,ROW,COL);
  ret=PanDuan(bread,ROW,COL);
  if(ret!='C')
  {
  	break;
  }
  //�ж�
   // #�������Ӯ *�������Ӯ  P����ƽ�� C������� 
  //������ 
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
  	printf("���Ӯ��\n");
  }
   if(ret=='*')
  {
  	printf("����Ӯ��\n");
  }	
   if(ret=='P')
  {
  	printf("ƽ�֣�\n");
  }	
}
void test(){ 
		int input=0;
   	
	 do {
	 	printf("#######################\n");
	 	printf("####1. ��ʼ 2. �˳�####\n");
	 	printf("#######################\n");
	    printf("������ѡ��");
	 	scanf("%d",&input);
	 	switch(input)
		 {
	 		case 1: 
	 		  printf("��Ϸ��ʼ��\n");
	 		  game();
	 		  break;
	 		case 0:
	 		  printf("�˳���Ϸ��");
	 	      break;
			default:
			  printf("����ȷ���룡��"); 
			  break;
		 }
		 
	 }while(input);
}
main(){
  test();
}

