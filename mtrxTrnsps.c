#include <stdio.h>
int main()
{
    int n, m, a[10][10];
    int i,j, sum = 0;
    printf("Enter no of rows : \n");
    scanf("%d", &n);
    printf("Enter no of columns : \n");
    scanf("%d", &m);
    printf("Enter matrix elements : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Original Matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the Matrix is : \n");
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}