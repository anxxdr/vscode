#include <stdio.h>

int main() {
    int n, a[1000], i = 0, b, c;
    scanf("%d %d", &b, &c);
    n = b * c;
    // 当n不为0时继续循环
    while (n != 0) {
        a[i] = n % 10; // 取n的个位数
        n = n / 10;    // 去掉n的个位数
        i++;           // 移动到下一个数组位置
    }
    b=i;
    for (i = 0; i<= b - 1; i++) {
        printf("%d", a[i]);
    }
    return 0;
}