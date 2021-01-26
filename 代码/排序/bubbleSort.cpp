#include<stdio.h>
 int main ()
 {
	int arr[]={ 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
	int i = 0 , j = 0, se = 0;
	se = sizeof(arr) / sizeof(arr[1]);
	 for ( i = 0; i < se ; i++ )
	      printf( "%d " , arr[i] );
    printf("\n");
	for ( i = 0 ; i < se-1 ; i++)
	{ 
    	for ( j = 0 ; j < se-1-i ; j++)  //每进行一次把最小的往后面堆积一个 后一个一定比前一个要小 
	 {  
	    if ( arr[j] < arr[j+1] )
		{
				int temp = 0 ;
				temp     = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
				
		}
	 
	 } 
	}
	
	 for ( i = 0; i < se ; i++ )
	      printf( "%d " , arr[i] );
	
	return 0;
	
}
