#include<stdio.h>
void Init( int arr[] , int se )
{
	int i = 0 ;
	for ( i = 0 ; i < se; i++ )
	      arr[i] = 0 ;
}
void set ( int arr[] , int se )
{
	int i = 0;
	for ( i = 0; i < se ; i++ )
	   arr[i] = i;
}
void Reverse ( int arr[] , int se )
{ 
    int i = 0 ;
    int left = 0;
    int right = se - 1;
    while ( left < right )
	{
		int temp = arr[left];
		arr[left ] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	} 
}
void Print ( int arr[] , int se )
{
	int i = 0 ;
	for ( i = 0 ;i < se ; i++ )
	   printf("%d ", arr[i]);
}

int main()
{
	int arr[10] ={0};
	int se = sizeof(arr) / sizeof(arr[1]) ;
	Init (arr , se );
	Print(arr , se );
	printf("\n");
	set(arr , se );
	Print (arr, se );
    printf("\n");
	Reverse(arr , se );
	Print (arr , se );
}
