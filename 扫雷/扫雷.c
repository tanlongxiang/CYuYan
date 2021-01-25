#include"game.h"
//菜单
void menu()
{
   printf("*************************\n");	
   printf("*******  1.开始   *******\n");	
   printf("*******  1.退出   *******\n");	
   printf("*************************\n");	
} 
//具体实现
void game()
{
	char lei[ROWS][COLS];
	char show[ROWS][COLS];
	
//初始化
new_board(lei ,ROWS,COLS,'0');
new_board(show,ROWS,COLS,'*');	
//打印
//board_show(lei ,ROW,COL);
//board_show(show,ROW,COL); 
//设置雷
set_lei(lei,ROW,COL); 
//board_show(lei ,ROW,COL);
board_show(show,ROW,COL); 
//扫雷
sart_lei(lei,show,ROW,COL);
} 
//游戏过程
void test()
{   int input=0; 
    srand((unsigned int )time(NULL));
	do
	{
	    //先打印菜单 
	    menu();
		printf("请输入选择：");
	scanf("%d",&input);
		switch(input)
		{
			case 1:
				
				printf("开始游戏！\n");
				printf("有%d颗类请排除\n",LEI);
				game();
				break;
			case 0:
				printf("退出游戏！\n");
				break;
			default:
				printf("请正确输入！\n");
				break;
		}
	}while(input);
} 
int main() {
	
	//游戏过程
	test();
	return 0;	
}
