#include <stdio.h>
int main(void) 
{
 int a,b,c,d,n,i;
   scanf("%d", &n);  // 有n组数据
    while (i<n)
	{
    scanf("%d %d", &a,&b);  // 读入两个整数值
	c=2*a-b/2;
	d=b/2-a;
	if(c,d%2==0||c,d%2==1)
    printf("%d %d\n",c,d);  // 输出两个整数的值
	else
	 {
	printf("error\n"); 
     } 
	i++;
    }
   	return 0;
}
