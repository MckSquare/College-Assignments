#include<stdio.h>
float scale(float *p);
main()
{
	float c;
	printf("Enter the value of Temp. in Celc.: ");
	scanf("%f", &c);
	scale(&c);
	printf("The temp in Fahrenhite is %f", c);
}
float scale(float *p)
{
	*p=32+((*p)*9/5);
}
