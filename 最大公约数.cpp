#include<stdio.h>
int main()
{
    int m, n, temp, i;
    printf("输入 m & n:");
    scanf("%d，%d", &m, &n);
    if(m<n) 
    { 
        temp=m;
        m=n;
        n=temp;
    }
    for(i=n; i>0; i--)  
        if(m%i==0 && n%i==0)
        {
            printf("%d and %d 的最大公约数是: %d\n", m, n, i);
            break;
        }
   
    return 0;
}
