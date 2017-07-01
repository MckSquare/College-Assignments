#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y);
float g(float x,float y);
floatfx(float x,float y);
floatgx(float x,float y);
floatfy(float x,float y);
floatgy(float x,float y);
main()
{
floatx,y,e;
inti=0;
printf("enter initial guess of x: ");
scanf("%f",&x);
printf("enter initial guess of y: ");
scanf("%f",&y);
printf("enter error: ");
scanf("%f",&e);
while((f(x,y)>e||f(x,y)<-e)||(g(x,y)>e||g(x,y)<-e))
{
x=x+(fy(x,y)*g(x,y)-gy(x,y)*f(x,y))/(fx(x,y)*gy(x,y)-
fy(x,y)*gx(x,y));
y=y+(gx(x,y)*f(x,y)-fx(x,y)*g(x,y))/(fx(x,y)*gy(x,y)-
fy(x,y)*gx(x,y));
i++;
}
if(i<50)
printf("Converging iteration number:%d\nThe value of the root
x=%f, y=%f\n", i, x, y);
else
{
printf("Iteration doesn't converge");
}
getch();
}
float f(float x,float y)
{
float z;
z=pow(x,2)+pow(y,2)-4;
return z;
}
float g(float x,float y)
{
float z;
z=x*y-1;
return z;
}
floatfx(float x,float y)
{
float z;
z=2*x;
return z;
}
floatfy(float x,float y)
{
float z;
z=2*y;
return z;
}
floatgx(float x,float y)
{
float z;
z=y;
return z;
}
floatgy(float x,float y)
{
float z;
z=x;
return z;
}