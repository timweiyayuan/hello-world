//ʵ�ִ����ж�2��float�������
//��ȷ��ʱС�����5λ
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
    z=(int)(z*100000+0.5);
    z=z/100000;
    z1=(int)(z1*100000+0.5);
    z1=z1/100000;
    if (z == z1) {
        z = (m + x) / y;
    }
    printf("Z is %.5f\n", z);
    printf("Z1 is %.5f\n", z1);
    return 0;
}
