#include<stdio.h>
#include<malloc.h>
#include<conio.h>
void transpose(int D[][5], int n)
{	
    int i,j;
    int E[5][5];
    for(i = 0 ; i < n; i++)
    {
        for(j=0;j<n;j++)
            E[i][j] = D[j][i];
    }
    for(i = 0 ; i< n ; i++)
    {
        for(j =0;j<n;j++)
        printf("%d ", E[i][j]);
        printf("\n");
    }
}
void mult(int **A,int **B,int n)
{
    int i,j;
    int D[5][5],l = 0,k = 0;
    for(i = 0 ; i < n ; i++)
    for( j = 0 ; j < n ; j++)
    D[i][j] = 0; 
    for(i = 0 ; i< n ; i++)
    {
        for(l = 0 ; l < n; l++)
        {
            for(j =0;j<n;j++)
                {
                    D[i][l]=(A[i][k]*B[k][l])+D[i][l];
                    k++;
                }
            k = 0;
        }
    }
    transpose(D,n);   
}
void mult1(int **A,int **B,int n)
{
    int i,j;
    int D[5][5],l = 0,k = 0;
    for(i = 0 ; i < n ; i++)
    for( j = 0 ; j < n ; j++)
    D[i][j] = 0; 
    for(i = 0 ; i< n ; i++)
    {
        for(l=0;l<n;l++)
        {
            for(j=0;j<n;j++)
                {
                    D[i][l]=(A[i][k]*B[k][l])+D[i][l];
                    k++;
                }
            k = 0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",D[i][j]);
        printf("\n");
    }
}
main()
{
    int *A[5],*B[5],*C[5],*D[5];
    int i,n,m,k,j;
    printf("Give the number of rows and columns for the arrays (square matrix): ");
    scanf("%d", &n);
    for( i=0;i<n;i++)
    A[i]=(int*)malloc(n*sizeof(int));
    for( i=0;i<n;i++)
    B[i]=(int*)malloc(n*sizeof(int));
    for( i=0;i<n;i++)
    C[i]=(int*)malloc(n*sizeof(int));    
    for( i=0;i<n;i++)
    D[i] = (int *)malloc(n*sizeof(int));    
    printf("Give the numbers of the first array (A): \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);
    }      
    printf("Give the numbers of the second array (B): \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&B[i][j]);
    }
    printf("The result of transpose (A*B) is : \n\n");
    mult(A,B,n);    
    printf("The result of B(transpose) * A(transpose): \n\n");
    for(i = 0 ; i < n; i++)
    {
        for(j=0;j<n;j++)
        C[i][j]=A[j][i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        D[i][j] = B[j][i];
    }
    mult1(D,C,n);
    getch();
}
