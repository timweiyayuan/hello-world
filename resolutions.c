#include <stdio.h>
#include <string.h>
int main()
{   
   int x, y,i,k=0,len;
    char r,ress[2048]="3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90";
//这是一个显示器支持的分辨率清单，中间逗号分隔。};
  int c[2048] ;
  len=strlen(ress);
   for(i=0;i<len;i++)
   {
   	if (ress[i]==',')
   	c[k]=i;
   	k++;
   }
    printf("输入画面的宽和高：");
    scanf("%d %d", &x, &y);
    //if(x,y)
    //把X,Y与ress中的字符转换的数字相比较，得出k的值 
    
    
    for(i=c[k-1];i<c[k];i++)
    r=ress[i];
    printf("选中的分辨率是%s\n", r);
    return 0;
}
