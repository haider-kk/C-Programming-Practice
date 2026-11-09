#include <stdio.h>
int main()
{
    int n, i, a[10], sum = 0;
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
        sum = sum + *(p+i);
    }
    printf("\nThe sum of the array elements is : %d", sum);
    printf("\nThe avg of the array elements is : %f", (double)sum/n);
}