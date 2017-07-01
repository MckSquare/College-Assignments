#include<stdio.h>
#include<conio.h>
main()
{
    int array[100], search, c, n, count=0;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(c=0;c<n;c++)
    scanf("%d", &array[c]);
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for(c=0;c<n;c++)
    {
        if(array[c]==search)
        {
            printf("\n%d is present at location %d", search, c+1);
            count++;
        }
    }
    if(count==0)
    printf("%d is not present", search);
    else printf("\n%d is present %d times", search, count);
    getch();
}
