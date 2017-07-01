#include<stdio.h>
main()
{
	int x[100], i, n, *p;
	printf ("Enter the no. of elements: ");
	scanf("%d", &n);
	printf("Enter the values: ");
	for(i=0;i<n;i++)
	{
		scanf ("%d", &x[i]);		
	}
	for(i=0;i<n;i++)
	{
		p=&x[i];
		printf("%d\t%d\n", x, *p);
	}
} 
