#include<stdio.h>
long long calcul(int n);
int main(){
    int n;
    long long result;
    scanf("%d",&n);
    result=calcul(n);
    printf("%11d",result);
    
    
    
    return 0;
}
long long calcul(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
    
}