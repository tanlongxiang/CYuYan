#include<stdio.h>
int gongyue(int a,int b){
//	int c=1;
//     while(c!=0){
//	      c=a%b;
//	      a=b;
//	      b=c;
//	 }
//	 return a;
	if(b==0) return a;	
  return gongyue(b,a%b);

}
int gongbei(int a11,int a22){
	return (a11*a22)/gongyue(a11,a22);
}
main(){
	int a1=0,a2=0,result,beishu;
	printf("��������������");
	scanf("%d,%d",&a1,&a2);
	result=gongyue(a1,a2);
	beishu=gongbei(a1,a2);
	printf("���Լ����%d\n",result);
	printf("��С��������%d\n",beishu);
} 
