#include <stdio.h>
#include <math.h>
#define EPSILON 0.000001 //���ݾ�����Ҫ
int main()
{
    float fa,fb;
 printf("����������������");
 scanf("%f %f", &fa, &fb);
if ( fabs( fa - fb) == EPSILON )
{
printf("���������\n");
}
   else
    printf("�����������\n");
    return 0;
} 
