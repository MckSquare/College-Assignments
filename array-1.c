#include<stdio.h>
#include<conio.h>
main()
{
    int n, c=1,d=1;
    float list[100],sum=0,avg;
    printf("Enter the no of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the marks of student %d: ", c);
        scanf("%f",&list[i]);
        sum=sum+list[i];
        c++;
    }
    avg=sum/n;
    for(int i=0;i<n;i++)
    {
    	printf("The marks of student %d is %f\n", d, list[i]);
    	d++;
	}
    
    printf("\nThe avarage of the marks of the group of %d students is %.2f",n,avg);
    getch();
}
