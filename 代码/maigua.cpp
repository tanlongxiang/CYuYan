#include<stdio.h>
main(){
	int gua=1020;
	int day=0;
	while(gua!=0){
			day++;
		gua=gua/2-2;
	} 
    printf("%d,%d",day,gua);
} 
