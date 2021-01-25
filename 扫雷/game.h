#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define LEI 20
//初始化 
void new_board(char board[ROWS][COLS],int row,int col,char can);
//打印表格
void board_show(char board[ROWS][COLS],int row,int col); 
//设置雷
void set_lei(char board[ROWS][COLS],int row ,int col ); 
//扫雷
void sart_lei(char lei[ROWS][COLS],char show[ROWS][COLS],int row ,int col); 
