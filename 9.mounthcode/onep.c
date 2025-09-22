#include <stdio.h>
/*
 * 输入三个数，输出其中最大的数
 */
int main(){
    int a,b,c,max;
    printf("qinginput a ,b,c,");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        max=a;
    }else{max=b;}
    if(max<c){
      max=c;
    }
    printf("%d",max);
}