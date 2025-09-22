#include <stdio.h>
int main(){
   int num;
   scanf("%d",&num);
   if(num%3==0&&num%5==0){
    printf("true");
   }else{
    printf("false");
   }
    return 0;
}