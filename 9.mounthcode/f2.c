#include<stdio.h>
int main(){

    int n=0,i=0,j=0,num=0;
    printf("请输入数组长度：");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){

   
    for(i=0;i<n-1;i++){
       
            if(a[i]>a[i-1]){
                num++;
            }
         
    }
    printf("%d\t",num);
}

    return 0;
}