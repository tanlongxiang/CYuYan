#include<stdio.h>
int find(int arr[] , int k , int se  );
int main () {
	int arr[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
	int se = sizeof(arr) / sizeof(arr[1]);
	int k =  9;
    int num = find( arr , k , se );
    if ( num == -1  )
	{
       printf("没找到！");	
	}
	else
    printf("找到了 ！下标为：%d\n" , num );
	return 0;
}
int find(int arr[] , int k , int se  )
{
	int left  = 0;
	int right = se - 1;
	int mid = 0;
while (left<=right)
{
	 mid= ( left + right ) / 2;
	if ( k > arr[mid])
	{
		left = mid + 1;
	}
	else if ( k < arr[mid] )
	{
		right = mid - 1;
	}
	else 
	  return mid;
}
	return -1;
}
