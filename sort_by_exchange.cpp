//Ωªªª≈≈–Ú
#include <stdio.h>
int main() {
  int x[3] = {}, i;
  while(1) {
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(i=0;i<2;i++) {
    if(x[2]<=x[1]&&x[2]<=x[0])
    {
     int min=x[2];
     if(x[0]>x[1])
     {
     x[2]=x[0];
     x[1]=x[1];
     x[0]=min;
	 }
	 else
	 {
	 x[2]=x[1];
     x[1]=x[0];
     x[0]=min;	
	 }
	}
    else if( x[i] > x[i+1]) {
  	    int temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;  	    
      }
      
    } 
    printf(" %d, %d, %d", x[0], x[1], x[2]);
    
  }
  return 0;
}
