#include<stdio.h>
#include<stdbool.h>
bool chk(int a[],int n);
int main(){
int n=0,i=1;
    bool sign;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sign=chk(a,n);
     if(sign){
        printf("Jolly");
    }
    else{
        printf("Not jolly");
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
    
    if(num==n-1){
        return true;
    }else{
    return false;}
}