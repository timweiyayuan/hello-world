#include<stdio.h>
int main()
{
while(1){
printf("请输入5个数\n");
int a[5];
for(int i=0;i<5;i++)
scanf("%d",&a[i]);
for(int i=0;i<4;i++){
for(int j=0;j<4-i;j++){
if(a[j]<a[j+1]){
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(int j=0;j<5;j++)
printf("%d",a[j]);
printf("\n");
}
int t,b,j;
 t=a[j];
    for(b = 2; b < t; b ++)//按照数学规则，如果在2~n-1中存在因子，则不是素数。
        if (t%b==0)
		{
        printf("%d",a[j]);
		}
        else
        printf("error");
        
}

