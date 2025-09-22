#include<stdio.h>

int main() {
    int a[3][3];
    int i, j;
    int sumz = 0, sums = 0;
    
    // 输入矩阵元素
    printf("请输入3X3矩阵的元素（每行3个数，共3行）：\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // 计算对角线之和
    for(i = 0; i < 3; i++) {
        // 主对角线元素的行索引等于列索引
        sumz += a[i][i];
        
        // 副对角线：行索引 + 列索引 = 矩阵维度 - 1
        sums += a[i][3 - i - 1];
    }
    
    // 显示输入的矩阵
    printf("\n输入的矩阵为：\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    // 输出结果
    printf("%d\n", sumz);
    printf("%d\n", sums);
    printf("%d\n", sumz + sums);
    
    return 0;
}