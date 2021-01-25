#include <stdio.h> 
// int binsearch(int x ,int v[],int n){
//     int i=0;
//         for( i=0;i<n;i++){
//             if(x==v[i])
//            { printf("找到了");return x;  }
//             else printf ("没有找到");  
//             return 0;    
//         }
//         return x;
//     }
main (){
    // char pass[20];
    // scanf("%s",pass);
    // int ch;
    // while ((getchar())!='\n'){

    // }
    // if(getchar()=='Y'){
    //     printf("确认密码");
    // }
    // else
    // printf("不确认");
    // int i=0,n=0;
    // int sum=1;

    // printf("请输入n：");
    // scanf("%d",&n);
    // for (i=1;i<=n;i++){
    //    sum= sum*i;
    // }
    // printf ("n的阶乘：%d",sum);
    // int sum = 0,n=1;
    //  int i=0;
    //  for (i=1;i<=10;i++){
    //      n=n*i;
    //      sum=sum+n;
    //  }
    // printf("%d",sum);
   
 
//  int v[]={1,2,3,4,5,6,7,8,9,20};
//     int s=binsearch(4,v[],10);
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=9;
    int se;
    se=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=se-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
    if (arr[mid]>n){
        right=mid-1;
    }
    
    else if(arr[mid]<n){
            left=mid+1;
    }
    else {printf("找到了下标为%d",mid);break;}
    }
           }