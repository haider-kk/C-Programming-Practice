#include <stdio.h>
int power(int b, int e);
int main()
{
    int b,e;
    printf("Enter the base : ");
    scanf("%d", &b);
    printf("Enter the exponential : ");
    scanf("%d", &e);
    int a = power(b,e);
    printf("%d^%d =  %d", b,e,a);
}
int power(int b, int e)
{
    int i, r;
    r = 1;
    for(i=1;i<=e;i++)
    {
        r = r * b;
    }
    return r;
}