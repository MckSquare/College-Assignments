#include<stdio.h>
#include<conio.h>
main()
{
	float x[20],y,z[20],r,w[20],sum=0.0,add=0.0,sums=0.0,adds=0.0;
	int i, n, h;
	printf("Enter the number of values given: ");
	scanf("%d", &n);
	printf("Enter the given values: \n");
	for(i=1;i<=n;i++)
	{
		printf("f(x[%d])=", i);
		scanf("%f", &x[i]);
	}
	printf("Enter the value of h:");
	scanf("%d",&h);
	printf("Velocity by Trapezoidal: ");
	for(i=2;i<n;i++)
	{
		sum=sum+x[i];
		z[i]=sum+(x[1]/2);
	}
	sum=sum+(x[1]+x[n])/2;
	r=h*sum;
	printf("%f\n",r);
	printf("Velocity by Simpson: ");
	for(i=2;i<n;i+=2)
	{
		add=add+4*x[i];
		w[i]=h*(add+(x[1]))/3;
	}
	for(i=3;i<n-1;i+=2)
	{
		add=add+2*x[i];
		w[i]=h*(add+(x[1]))/3;
	}
	add=add+(x[1]+x[n]);
	printf("%f\n",h*add/3);
	printf("Displacement by Trapezoidal: ");
	for(i=2;i<n;i++)
	sums=sums+h*z[i];
	sums=sums+h*(x[1]+x[n])/2;
	printf("%f\n", h*sums);
	printf("Displacement by Simpson: ");
	for(i=2;i<n;i+=2)
	{
		adds=adds+4*w[i];
	}
	for(i=3;i<n-1;i+=2)
	{
		adds=adds+2*w[i];
	}
	adds=adds+h*(x[1]+x[n])/3;
	printf("%f",h*adds/3);
}
