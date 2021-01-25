#include<stdio.h>
main(){
	unsigned int man;
	unsigned int won;
	unsigned int zi;
	for(;man<=20;man++)
	for(won=1;won<=33;won++){
		zi=100-man-won;
		if(zi/3+man*3+won*3==100){
		printf("%d,%d,%d\n",man,won,zi);
		}
		}
	}
	
	

