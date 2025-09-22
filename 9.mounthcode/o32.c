#include<stdio.h>
#include<stdbool.h>
bool isprime(int n);
int main(){
    for(int i=1;i<=100;i++){
        if(isprime(i)){
            printf("%d\t",i);
        }
    }

    return 0;
}
bool isprime(int n){
    if(n<=1){return false;}
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }else{
              return true;
            }

    }
}