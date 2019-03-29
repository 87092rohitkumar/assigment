#include<stdio.h>
#include<math.h>
int main()
{
double n,p;
double x1,y1,x2,y2,x3,y3;
printf("enter the value of first coordinate x1 and y1\n");
scanf("%lf%lf",&x1,&y1);
printf("enter the value of first coordinate x2 and y2\n");
scanf("%lf%lf",&x2,&y2);
printf("enter the value of first coordinate x2 and y2\n");
scanf("%lf%lf",&x3,&y3);
printf("%lf%lf%lf%lf%lf%lf",x1,y1,x2,y2,x3,y3);
p=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
n=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
printf("Area=%lf\n",p*n);
printf("%lf",p);
return 0;
}