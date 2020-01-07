#include <stdio.h>
#include <math.h>
#define EPSILON 0.000001 //根据精度需要
int main()
{
    float fa,fb;
 printf("输入两个浮点数：");
 scanf("%f %f", &fa, &fb);
if ( fabs( fa - fb) == EPSILON )
{
printf("浮点数相等\n");
}
   else
    printf("浮点数不相等\n");
    return 0;
} 
