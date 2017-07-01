#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float x[20],y[20],lu[20],l=0.0,sq=0.0,s=0.0,sl=0.0,a0,a1;
	int i, n;
	printf("Enter The number of values: ");
	scanf("%d", &n);
	printf("Enter the given values in the table: \n");
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=", i);
		scanf("%f", &x[i]);
		printf("y[%d]=", i);
		scanf("%f", &y[i]);
	}
	for(i=1;i<=n;i++)
	{
		lu[i]=log(y[i]);
		l=l+lu[i];
		sq=sq+x[i]*x[i];
		s=s+x[i];
		sl=sl+x[i]*lu[i];
	}
	a0=(l*sq-s*sl)/(n*sl-s*s);
	a1=(n*sl-s*l)/(n*sl-s*s);
	printf("The equation is: %fexp(-%fx)", exp(a0),a1);
}
