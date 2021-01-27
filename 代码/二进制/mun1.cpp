#include <stdio.h >
int ret (int input )
{
	int i = 0;
	int count = 0;
	for ( i = 0 ; i < 32 ; i++)
	{
	      int a =input >> i ;
		if ( a&1==1)
		{
				
		        count++;
		}
	
	}
	return count;
}
int main()
{
    int input = 0;
	scanf("%d" , &input );
	int num = ret(input);
	printf("%d" , num  );	
}
