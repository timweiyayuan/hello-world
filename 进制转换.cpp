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
    printf("ʮ������%dת���ɶ��������ǣ�", m);
    for (i--; i >= 0; i--)           //�����鵹�����
        printf("%d", a[i]);
    printf("\n");
}
int main() {
    int n, n1, n2;
    printf("����Ҫ��ĸ�����");
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
       TenToTwo(i);   //n1��10����������
    }
}
