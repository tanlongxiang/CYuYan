#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char arr[20]={0};
   system("shutdown -s -t 60");
   again:
   printf("你的电脑要关机了奥！！！！嘻嘻嘻嘻嘻 ！！！！\n赶紧输入：\n“我是猪 ”就能取消关机！\n哈哈哈哈哈哈哈\n快点！！快点！！\n");
   scanf("%s",arr);
   if(strcmp(arr,"我是猪")==0){
     system("shutdown -a");
             }
    else goto again; 
}
