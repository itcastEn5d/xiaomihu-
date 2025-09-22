/*


在一次考试中，每个学生的成绩都不相同，现知道了每个学生的学号和成绩，求考第 k 名学生的学号和成绩。

输入格式
第一行有两个整数，分别是学生的人数 n(1≤n≤100) 和求第 k 名学生的 k(1≤k≤n)。

其后有 n 行数据，每行包括一个学号（整数）和一个成绩（浮点数），中间用一个空格分隔。

输出格式
输出第 k 名学生的学号和成绩，中间用空格分隔。（注：请用 %g 输出成绩）
*/
#include<stdio.h>

int main (){
    int n,k;
    scanf("%d %d",&n,&k);
    int num[100],i,j,tempn;
    double score[100],temps;
    for(i=0;i<n;i++){
        scanf("%d %lf",&num[i],&score[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(score[j]<score[j+1]){
                
                tempn=num[j];
                num[j]=num[j+1];
                num[j+1]=tempn;

                temps=score[j];
                score[j]=score[j+1];
                score[j+1]=temps;

            }
        }
    }
    
    printf("%d %g",num[k+1],score[k+1]);



    return 0;
}