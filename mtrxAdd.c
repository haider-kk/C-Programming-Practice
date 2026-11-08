#include <stdio.h>
int main()
{
    int n, m, a[10][10], b[10][10], c[10][10];
    int i,j,p,q, sum = 0;
    printf("Enter no of rows for 1st Matrix : \n");
    scanf("%d", &n);
    printf("Enter no of columns for 1st Matrix : \n");
    scanf("%d", &m);
    printf("Enter no of rows for 2nd Matrix : \n");
    scanf("%d", &p);
    printf("Enter no of columns for 2nd Matrix : \n");
    scanf("%d", &q);
    if(n!=p || m!=q)
    {
        printf("Addition for matrices with different dimensions not possible. Sorry!");
    }
    else
    {
        printf("Enter 1st matrix elements : \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter 2nd matrix elements : \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("The 1st Matrix is : \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("The 2nd Matrix is : \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        printf("The sum of the matrices is : \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}