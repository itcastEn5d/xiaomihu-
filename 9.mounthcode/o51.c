#include<stdio.h>
#define N 10
int main(){
    int arr[N];
    int i,j,min_index,temp;
    printf("请输入%d个整数：\n", N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N-1;i++){
        min_index=i;

        for(j=i+1;j<N;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
       

    }
    printf("**********");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }



    return 0;

}