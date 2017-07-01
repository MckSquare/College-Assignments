#include<stdio.h>
#include<conio.h>
main()
{
	float a,c;
	int b, d[100], e[100], count=1, discount=1, i;
	printf("Enter the decimal number: ");
	scanf("%f", &a);
	b=(int) a;
	c=a-b;
	printf("The Binary equivalent is: ");
	for (i=0; i<count; i++)
	{
		if(b!=0)
		{
			d[i]=b%2;
			b=(b-d[i])/2;
			count++;
		}
		else break;
	}
	for(i=(count-2); i>=0; i--)
	printf("%d", d[i]);
	if(c!=0)
	printf(".");
	for (i=0;i<discount;i++)
	{
		if(c!=0)
		{
			e[i]=(int)(c*2);
			c=(c*2)-e[i];
			discount++;
		}
		else break;
	}
	for (i=(discount-2); i>=0; i--)
	printf("%d", e[i]);
	getch();
}
