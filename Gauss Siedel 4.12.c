#include<stdio.h>
#include<math.h>
#include<conio.h>
#define X 2
main()
{
    float x[X][X+1],a[X], ae, max,t,s,e;
    int i,j,r,m;
    for(i=0;i<X;i++)
	a[i]=0;
    printf("Enter the co-efficients\n");
    for(i=1;i<=X;i++)
    {
    for(j=1;j<=X+1;j++)
    {
    	printf("c[%d][%d]: ", i, j);
    	scanf("%f",&x[i-1][j-1]);
    }
    }
    printf("Enter the allowed error and maximum number of iteration: \ne=");
    scanf("%f",&ae);
    printf("I=");
    scanf("%d", &m);
    for(r=1;r<=m;r++)
    {
        max=0;
        for(i=0;i<X;i++)
        {
            s=0;
            for(j=0;j<X;j++)
            if(j!=i) s+=x[i][j]*a[j];
            t=(x[i][X]-s)/x[i][i];
            e=fabs(a[i]-t);
            a[i]=t;
    	}
        if(max<ae)
        {
            printf("Converses in %d iteration\n", r);
            for(i=0;i<X;i++)
            printf("a[%d]=%f\n", i+1,a[i]);
            return 0;
        }
        }
}
