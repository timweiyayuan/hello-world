#include<stdio.h>
int main()
{
    int m, n, temp, i;
    printf("���� m & n:");
    scanf("%d��%d", &m, &n);
    if(m<n) 
    { 
        temp=m;
        m=n;
        n=temp;
    }
    for(i=n; i>0; i--)  
        if(m%i==0 && n%i==0)
        {
            printf("%d and %d �����Լ����: %d\n", m, n, i);
            break;
        }
   
    return 0;
}
