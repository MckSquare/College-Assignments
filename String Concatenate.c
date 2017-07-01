#include<stdio.h>
#include<string.h>
main()
{
	char a[100], b[100], c[100];
	int i, j, l;
	printf("String 1: ");
	scanf("%s", &a);
	printf("String 2: ");
	scanf("%s", &b);
	for(i=0; i<strlen(a); i++)
	c[i]=a[i];
	l=strlen(a);
	for(j=0; j<=strlen(b); j++)
	c[j+l]=b[j];
	printf("%s", c);
}
