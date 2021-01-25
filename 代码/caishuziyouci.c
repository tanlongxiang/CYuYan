#include<stdio.h>
#include<stdlib.h>
#include <time.h>
 void  caice(int x){
       int num=0;
       num=rand()%100+1;
      // printf("%d\n",num);
       while(1){
         printf("请输入猜测：");
         scanf("%d",&x);
        if(x<num){
            printf("猜小了！\n");
        }
        else if(x>num){
            printf("猜大了！\n");
        }
        else {
            printf("猜对了！！！！\n");
            break;   
        }
      }

 }
main(){
     int input =0;
     int guess=0; 
     srand((unsigned int)time(NULL));
    do{
       
     printf("猜数字游戏：\n");
     printf("####################\n");
     printf("####1.开始 0.退出###\n");
     printf("####################\n");
     
     printf("请选择：");
     scanf("%d",&input);
     switch(input){
         case 1: 
         caice(guess);
         break;
         case 0: 
         printf("退出游戏！\n");
         break;
         default: 
         printf("请正确输入！！\n");
         break; 
     }
     }while(input);
}
