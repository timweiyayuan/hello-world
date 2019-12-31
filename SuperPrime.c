#include <stdio.h>
int is_prim(int prim)
{
 int a,b=2;
 for (a=2;a<prim;a++)
  {if(prim%a!=0)
   b++;
  }	
  if(b==prim)
  return 1;
  else 
  return 0;
}
int sum_super(int super)
{
int a=1,i,wei=1,k[5],org;
 org=super;
 while((int)(org/10)!=0)
 {
 	k[wei]=org%10;
wei++;
org=(int)(org/10);
 }
 for (i=1;i<=wei;i++)
 {
 if (is_prim(k[i]))	
 a++;
 }
 if(a==wei)
 return 1;
 else
 return 0;
}
int multi_super(int super)
{
int a=1,i,wei=1,k[5],org;
 org=super;
 while((int)(org/10)!=0)
 {
 	k[wei]=org%10;
wei++;
org=(int)(org/10);
 }
 for (i=1;i<=wei;i++)
 {
 if (is_prim(k[i]*k[i]))	
 a++;
 }
 if(a==wei)
 return 1;
 else
 return 0;	
}
int main(void) 
{
 int super,i=0,k[10000],ovg,b,sum=0;
 for(super=101;super<10000;super++)
 {
 if(is_prim(super)&&sum_super(super)&&multi_super(super))
 printf("%d\n",super);
 k[i]=super;
 b++;	
 }
 for(i=0;i<b;i++)
 {
 	sum+=k[i];
 }
 ovg=sum/b;
 printf("平均数是：%d",ovg); 
   	return 0;
}
