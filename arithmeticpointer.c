#include <stdio.h>
int main()
{
    int n, i, a[10];
    int *p = a;
    printf("Enter the no of elements in the array 1 (integers ) : "); // 4 gap for each element if type is int
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements : ");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        p = &a[i];
        printf("\nThe address of the element %d is %p", a[i],p);
    }


    int m;
    double b[10];
    double *q = b;
    printf("\n\n\nEnter the no of elements in the array 2 (double ) : "); // 8 gap for each element if type is double
    scanf("%d", &m);
    for(i=0;i<m;i++)
    {
        printf("Enter the elements : ");
        scanf("%lf", &b[i]);
    }
    for(i=0;i<m;i++)
    {
        q = &b[i];
        printf("\nThe address of the element %f is %p", b[i],q);
    }

    int k;
    char c[10];
    char *r = c;
    printf("\n\n\nEnter the no of elements in the array 3 (Char ) : "); // 1 gap for each element if type is char
    scanf("%d", &k);
    for(i=0;i<k;i++)
    {
        printf("Enter the elements : ");
        scanf(" %c", &c[i]);
    }
    for(i=0;i<k;i++)
    {
        r = &c[i];
        printf("\nThe address of the element %c is %p", c[i],r);
    }
}