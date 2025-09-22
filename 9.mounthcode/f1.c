#include<stdio.h>
#include<stdbool.h>
bool chk(int a[],int n);
int main(){
    int n=0,i=0;
    printf("请输入数组长度：");
    scanf("%d",&n);
    bool sign;
    int a[n];
  
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sign=chk(a,n);
    if(sign){
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}
bool chk(int a[],int n){
    int i,num=0;
    for(i=0;i<n-1;i++){
        if(a[i]-a[i+1]>=1&&a[i]-a[i+1]<=n-1||a[i+1]-a[i]>=1&&a[i+1]-a[i]<=n-1){
        
                num++;
            
        
        }
    }
    printf("%d",num);
    if(num==n-1){
        return true;
    }else{
    return false;}
}