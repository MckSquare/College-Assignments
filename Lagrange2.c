#include<stdio.h>
#include<conio.h>
main()
{
float a[20], b[20], sum=0, prod,x;
int i, j, n, m;
printf("Lagrange Interpolation");
printf("\nChoose either quadratic or cubic(enter the max order.): ");
scanf("%d",&m);
n=m+1;
printf("Enter the value given: ");
scanf("%f",&x);
printf("Enter the inputs: \n");
for(i=1;i<=n;i++)
{
printf("x[%d]=", i);
scanf("%f",&a[i]);
printf("f(x[%d])=", i);
scanf("%f", &b[i]);
}
for(i=1;i<=n;i++)
{
prod=1;
for(j=1;j<=n;j++)
{
if(j!=i)
prod*=((x-a[j])/(a[i]-a[j]));
}
sum+=b[i]*prod;
}
printf("The required value is %f", sum);
getch();
}