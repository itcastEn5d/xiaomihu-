#include<stdio.h>
long long calculate(int n);// implicit declaration of function 'calculate' [-Wimplicit-function-declaration]
//result=calculate(n);
  //     ^~~~~~~~~
int main(){
    int n;
    long long result;
    scanf("%d",&n);
    result=calculate(n);
    if (result == -1) {
        printf("错误：负数没有阶乘！\n");
    } else {
        printf("%d的阶乘是：%lld\n", n, result);
    }

}
long long calculate(int n){
    long long fac=1;
    if(n<0){
        return -1;
    }else if(n==0||n==1){
        return 1;
    }
    for(int i=2;i<=n;i++){
        fac*=i;

    }
    return fac;
}