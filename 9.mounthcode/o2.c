 #include<stdio.h>
 int recursum(int n);

 int main(){
    /*int sum=0;
    int N=1;
    for(N=1;N<=100;N++){
        sum+=N;
    }
    printf("%d",sum);
    */
    //递归
    int sum;
    sum=recursum(100);
    printf("%d",sum);





    return 0;
 }
 int recursum(int n){
    if(n==1){
       
        ///printf("%d\t",n);
        return 1;//到这里就返回1了，不再继续调用函数了，递归也就停止了
    }
  
    //printf("%d\n",recursum(n-1));
    return n+recursum(n-1);

 }