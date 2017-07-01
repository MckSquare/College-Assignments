#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float x[20],y[20],f,s,d,h,p;
    int j,i,k,n;
	char c;
	printf("Type f if the value is from forward side of the given table\nType b if the value is from backward side of the given table\nEnter: ");
	scanf("%c",&c);
	switch(c)
	{
		case'f':
			printf("enter the value of n :");
			scanf("%d",&n);
			printf("enter the elements of x:");
			for(i=1;i<=n;i++)
			{
				scanf("%f",&x[i]);
    		}
    		printf("enter the elements of y:");
    		for(i=1;i<=n;i++)
    		{
        		scanf("%f",&y[i]);                  
    		}
			h=x[2]-x[1];
			printf("Enter the value of f:");
			scanf("%f",&f);
			s=(f-x[1])/h;
			p=1;
			d=y[1];                                  
			for(i=1;i<=(n-1);i++)
			{
    			for(j=1;j<=(n-i);j++)
        		{
            		y[j]=y[j+1]-y[j];             
        		}
        		p=p*(s-i+1)/i;
        		d=d+p*y[1];
 			}                         
			printf("For the value of x=%6.5f THe value is %6.5f",f,d);
			break;
		case'b':
    		printf("enter the value of the elements :");
    		scanf("%d",&n);
    		printf("enter the value of x: nn");
    		for(i=1;i<=n;i++)
    		{
    			scanf("%f",&x[i]);
    		}
    		printf("enter the value of y: nn");
    		for(i=1;i<=n;i++)
    		{
        		scanf("%f",&y[i]);
			}     
    		h=x[2]-x[1];
    		printf("enter the searching point f:");                  
			scanf("%f",&f);
			s=(f-x[n])/h;
			d=y[n];
			p=1;
			for(i=n,k=1;i>=1,k<n;i--,k++)
			{
        		for(j=n;j>=1;j--)
        		{
            		y[j]=y[j]-y[j-1];
        		}
    		p=p*(s+k-1)/k;
    		d=d+p*y[n];
			}
			printf("for f=%f ,ans is=%f",f,d);
			break;
	}

		getch();
}
