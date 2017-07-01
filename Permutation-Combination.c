#include<stdio.h>
#include<conio.h>
int fac(int m);
main()
{
    char s;
    int n, r;
    printf("Hello User!\n");
    printf("Please enter 'p' for permutation & 'c' for combination\n");
    printf("Enter your choice: ");
    scanf("%c", &s);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    switch(s)
    {
        case'p':
            printf("=%d", fac(n)/fac(n-r));
            break;
        case'c':
            printf("=%d", fac(n)/(fac(r)*fac(n-r)));
            break;
    }
    getch();
}
int fac(int p)
{
    int i, j=1;
    for(i=1;i<=p;i++)
    j=j*i;
    return j;
}
