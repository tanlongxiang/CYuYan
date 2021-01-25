#include<stdio.h>
#include<string.h>
main(){
    char arr1[]="##############";
    char arr2[]="Hi boy ! Hello";
    int lg=strlen(arr2);
    int left=0;
    int right=lg-1;
    int mid =(left+right)/2;
while (left<=mid){
  //  for(int i=0;i<=mid;i++)
 // { 
    arr1[left]=arr2[left];
    arr1[right]=arr2[right];
    printf("%s\n",arr1);
    left++;
    right--;
    //} 
}
}