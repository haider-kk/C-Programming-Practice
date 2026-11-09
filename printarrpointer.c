#include <stdio.h>
int main()
{
    int n, i, a[10];
    int *p = a;
    printf("Enter the no of elements in the array 1 (integers ) : "); 
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements : ");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\t%d",*(p + i));
    }
}