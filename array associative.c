#include<stdio.h>
#include<conio.h>
main()
{
    int m1[10][10], m2[10][10], m3[10][10], m4[10][10], m5[10][10], m6[10][10], m7[10][10];
    int m, n, p, q, w, x, c, d, k, sum=0;
    printf("Enter the no. of rows & columns of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements: \n");
    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    scanf("%d", &m1[c][d]);
    printf("Enter the no. of rows & columns of second matrix: ");
    scanf("%d%d", &p, &q);
    printf("Enter the elements: \n");
    for(c=0;c<p;c++)
    for(d=0;d<q;d++)
    scanf("%d", &m2[c][d]);
    printf("Enter the no. of rows & columns of third matrix: ");
    scanf("%d%d", &w, &x);
    printf("Enter the elements: \n");
    for(c=0;c<w;c++)
    for(d=0;d<x;d++)
    scanf("%d", &m3[c][d]);
    if (n!=p)
    printf("Error\nPlease check your concept\n Thank You");
    else if(q!=w)
    printf("Error\nPlease check your concept\n Thank You");
    else
    {
        for (c=0;c<m;c++)
        for (d=0;d<q;d++)
        {
            for (k=0;k<p;k++)
            {
                sum=sum+m1[c][k]*m2[k][d];
            }
            m4[c][d]=sum;
            sum=0;
        }
        for (c=0;c<m;c++)
        for (d=0;d<x;d++)
        {
            for (k=0;k<q;k++)
            {
                sum=sum+m4[c][k]*m3[k][d];
            }
            m5[c][d]=sum;
            sum=0;
        }
    }
    if (n!=p)
    printf("Error\nPlease check your concept\n Thank You");
    else if(q!=w)
    printf("Error\nPlease check your concept\n Thank You");
    else
    {
        for (c=0;c<p;c++)
        for (d=0;d<x;d++)
        {
            for (k=0;k<q;k++)
            {
                sum=sum+m2[c][k]*m3[k][d];
            }
            m6[c][d]=sum;
            sum=0;
        }
        for (c=0;c<m;c++)
        for (d=0;d<x;d++)
        {
            for (k=0;k<p;k++)
            {
                sum=sum+m1[c][k]*m6[k][d];
            }
            m7[c][d]=sum;
            sum=0;
        }
    }
    for(c=0;c<m;c++)
	{
        for(d=0;d<x;d++)
        {
            printf("%d\t", m5[c][d]);
        }
        printf("\n");
    }
    printf("\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<x;d++)
        {
			printf("%d\t", m7[c][d]);
        }
        printf("\n");
    }
    for(c=0;c<m;c++)
    for(d=0;d<x;d++)
    {
        if (m5[c][d]==m7[c][d])
        printf("\nProved");
        else
        {
            printf("\nError");
        }
    }
    getch();
}
