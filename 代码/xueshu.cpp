#include<stdio.h>
int max(int a,int b){
//	int n=1;
//	while(n!=0){
//	n=a%b;
//	a=b;
//	b=n;
//	}
//  return a;
if(b==0) return a;	
  return max(b,a%b);
}
int min(int a,int b,int l){
	return a*b/l;
}
main(){
	int i=0, j=0;
	scanf("%d %d",&i,&j);
	int c=max(i,j);
	int q=min(i,j,c);
	printf("%d,%d",c,q);
	
}
