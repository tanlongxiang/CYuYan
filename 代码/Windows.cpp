#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char arr[20]={0};
   system("shutdown -s -t 60");
   again:
   printf("��ĵ���Ҫ�ػ��˰£����������������� ��������\n�Ͻ����룺\n�������� ������ȡ���ػ���\n��������������\n��㣡����㣡��\n");
   scanf("%s",arr);
   if(strcmp(arr,"������")==0){
     system("shutdown -a");
             }
    else goto again; 
}
