#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,b=1;
    printf("Enter the number of rows in triangle: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        	printf("%d\t", b);
            b++;
        }
        printf("\n");
    }
    getch();
}
