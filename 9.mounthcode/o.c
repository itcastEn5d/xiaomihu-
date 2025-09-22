#include<stdio.h>
#include<stdbool.h>
//找素数,数学的质数，即因子只有1和本身的数
bool isPrime(int n);//函数的声明要在外面进行

int main(){
    int i;
  
    for(i=100;i<=200;i++){
        if(isPrime(i)){
            printf("%d\t",i);
        }
       
    }
  
    return 0;
}
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}