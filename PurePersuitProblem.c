#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int t,i,vf=20;
float xf[13],yf[13],d;
float xb[13]={80,90,99,108,116,125,133,141,151,160,169,179,190};
float yb[13]={0,-2,-5,-9,-15,-18,-23,-29,-28,-25,-21,-20,-17};
xf[0]=0;
yf[0]=50;

for(t=0;t<12;t++) {
  d=sqrt(pow((yb[t]-yf[t]),2)+pow((xb[t]-xf[t]),2));
  if(d<10)
    {
    printf("\n\nCaught");
    printf("\nTime: %d min, Distance: %f km\n",t,d);
    break;
     }
    else
    {
    xf[t+1]=xf[t]+(vf*(xb[t]-xf[t])/d);
    yf[t+1]=yf[t]+(vf*(yb[t]-yf[t])/d);
     }
}
if(t>11)
printf("Target Escaped\n");
getch();
return(0);
  }
