#include<stdio.h>
long long calcul(int n);
int main (){
int n;
long long result;
scanf("%d",&n);
result=calcul(n);
printf("%11d",result);

    return 0;
}
long long calcul(int n){

    if(n==0||n==1){
        return 1;
    }
    return n*calcul(n-1);
}
