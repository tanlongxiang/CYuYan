#include"game.h"
//�˵�
void menu()
{
   printf("*************************\n");	
   printf("*******  1.��ʼ   *******\n");	
   printf("*******  1.�˳�   *******\n");	
   printf("*************************\n");	
} 
//����ʵ��
void game()
{
	char lei[ROWS][COLS];
	char show[ROWS][COLS];
	
//��ʼ��
new_board(lei ,ROWS,COLS,'0');
new_board(show,ROWS,COLS,'*');	
//��ӡ
//board_show(lei ,ROW,COL);
//board_show(show,ROW,COL); 
//������
set_lei(lei,ROW,COL); 
//board_show(lei ,ROW,COL);
board_show(show,ROW,COL); 
//ɨ��
sart_lei(lei,show,ROW,COL);
} 
//��Ϸ����
void test()
{   int input=0; 
    srand((unsigned int )time(NULL));
	do
	{
	    //�ȴ�ӡ�˵� 
	    menu();
		printf("������ѡ��");
	scanf("%d",&input);
		switch(input)
		{
			case 1:
				
				printf("��ʼ��Ϸ��\n");
				printf("��%d�������ų�\n",LEI);
				game();
				break;
			case 0:
				printf("�˳���Ϸ��\n");
				break;
			default:
				printf("����ȷ���룡\n");
				break;
		}
	}while(input);
} 
int main() {
	
	//��Ϸ����
	test();
	return 0;	
}
