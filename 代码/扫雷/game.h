#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define LEI 20
//��ʼ�� 
void new_board(char board[ROWS][COLS],int row,int col,char can);
//��ӡ���
void board_show(char board[ROWS][COLS],int row,int col); 
//������
void set_lei(char board[ROWS][COLS],int row ,int col ); 
//ɨ��
void sart_lei(char lei[ROWS][COLS],char show[ROWS][COLS],int row ,int col); 
