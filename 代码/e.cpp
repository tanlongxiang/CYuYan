#include<stdio.h>
main(){
	float e=1;
	float n=0,mu=1,zi=1,a=0,b=0;
	scanf("%f",&n);
	for(int i=1;i<n;i++){
	a=a+1;
	mu=mu*a;
    e=e+zi/mu;
	}
	printf("%f,%d\n",e,mu);	
}
