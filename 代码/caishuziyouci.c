#include<stdio.h>
#include<stdlib.h>
#include <time.h>
 void  caice(int x){
       int num=0;
       num=rand()%100+1;
      // printf("%d\n",num);
       while(1){
         printf("������²⣺");
         scanf("%d",&x);
        if(x<num){
            printf("��С�ˣ�\n");
        }
        else if(x>num){
            printf("�´��ˣ�\n");
        }
        else {
            printf("�¶��ˣ�������\n");
            break;   
        }
      }

 }
main(){
     int input =0;
     int guess=0; 
     srand((unsigned int)time(NULL));
    do{
       
     printf("��������Ϸ��\n");
     printf("####################\n");
     printf("####1.��ʼ 0.�˳�###\n");
     printf("####################\n");
     
     printf("��ѡ��");
     scanf("%d",&input);
     switch(input){
         case 1: 
         caice(guess);
         break;
         case 0: 
         printf("�˳���Ϸ��\n");
         break;
         default: 
         printf("����ȷ���룡��\n");
         break; 
     }
     }while(input);
}
