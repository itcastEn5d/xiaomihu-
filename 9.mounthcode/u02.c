/*
题目描述
最近有 n 个不爽的事，每句话都有一个正整数刺痛值（心理承受力极差）。爱与愁大神想知道连续 m 个刺痛值的和的最小值是多少，但是由于业务繁忙，爱与愁大神只好请你编个程序告诉他。

输入格式
第一行有两个用空格隔开的整数，分别代表 n 和 m。

第 2 到第 (n+1) 行，每行一个整数，第 (i+1) 行的整数 a 
i
​
  代表第 i 件事的刺痛值 a 
i
​
 。

输出格式
输出一行一个整数，表示连续 m 个刺痛值的和的最小值是多少。*/
#include<stdio.h>
int main(){
    int n,m,i,sum,min;
    scanf("%d",&n,&m);
    int num[20];
    for(i=0;i<n;i++){
    scanf("%d",&num[i]);
    }
    
    for(i=0;i<n-m+1;i++){
        sum=num[i]+num[i+1]+num[i+2];
        if(i==0){
            min=sum;
        }
        if(sum<min){
            min=sum;
        }



    }
    printf("%d",min);


    return 0;
}