#include <stdio.h>
int main(void) 
{
 int a,b,c,d,n,i;
   scanf("%d", &n);  // ��n������
    while (i<n)
	{
    scanf("%d %d", &a,&b);  // ������������ֵ
	c=2*a-b/2;
	d=b/2-a;
	if(c,d%2==0||c,d%2==1)
    printf("%d %d\n",c,d);  // �������������ֵ
	else
	 {
	printf("error\n"); 
     } 
	i++;
    }
   	return 0;
}
