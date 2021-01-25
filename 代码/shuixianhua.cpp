#include<stdio.h>
#include<math.h>
main(){
	int bai,shi,ge,i=123;
	for(int i=2;i<1000;i++){
        ge=i%10;
        shi=i/10%10;
	     bai=i/100; 
	     if(pow(ge,3)+pow(shi,3)+pow(bai,3)==i)
	printf("%d,%d,%d,%d\n",i,bai,shi,ge);
	}
	
}
