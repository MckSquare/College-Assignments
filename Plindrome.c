#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,l,r=0;
	printf("Enter The job: ");
	scanf("%s", &a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=a[l-i-1])
		{
			r=1;
			break;
		}
	}
	if(r>0)
	printf("%s is not a palindrom", a);
	else
	printf("%s is a palindrom", a);
	return 0;
}
