#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    // 读取n和数组元素
    scanf("%d", &n);
    
    // 如果n为1，直接输出Jolly（只有一个元素时没有相邻差）
    if (n == 1) {
        printf("Jolly\n");
        return 0;
    }
    
    long long a[1001]; // 使用long long防止溢出
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    
    // 创建标记数组，记录哪些差值已经出现
    bool diff_exist[1001] = {false}; // diff_exist[i]表示差值i是否存在
    
    // 计算相邻元素差的绝对值，并标记
    for (int i = 0; i < n - 1; i++) {
        long long diff = llabs(a[i] - a[i + 1]); // 使用llabs处理大整数
        if (diff >= 1 && diff <= n - 1) {
            diff_exist[(int)diff] = true;
        }
    }
    
    // 检查[1, n-1]之间的所有整数是否都存在
    bool is_jolly = true;
    for (int i = 1; i <= n - 1; i++) {
        if (!diff_exist[i]) {
            is_jolly = false;
            break;
        }
    }
    
    // 输出结果
    if (is_jolly) {
        printf("Jolly\n");
    } else {
        printf("Not jolly\n");
    }
    
    return 0;
}