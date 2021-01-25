#include <stdio.h>
int binsearch(int x,int v[],int n){
   int left=v[0];
   int right = n-1;
   while (left<=right){
       int mid=(left+right)/2;
       if(x<v[mid]){
           right=mid-1;
       }
       else if(x>v[mid]){
           left=mid+1;
       }
       else return mid;
   }
   return -1;
}
main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int se=0;
se=sizeof(arr)/sizeof(arr[0]);
int ret=binsearch(7,arr,se);
if(ret==-1){
   printf("没有找到"); 
}
else printf("找到了下标为：%d",ret);
}