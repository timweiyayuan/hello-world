#include <iostream>
void TenToTwo(int num)
{
    int m, c, i = 0;
    int n = 2;
    int a[32];
    m = num;
    while (num>0)
    {
        c = (num % n);
        a[i] = c;
        num = num / n;
        i++;
    }
    printf("十进制数%d转换成二进制数是：", m);
    for (i--; i >= 0; i--)           //将数组倒序输出
        printf("%d", a[i]);
    printf("\n");
}
int main() {
    int n, n1, n2;
    printf("输入要求的个数：");
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
       TenToTwo(i);   //n1是10进制正整数
    }
}
