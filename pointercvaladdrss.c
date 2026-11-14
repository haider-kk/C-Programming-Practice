#include <stdio.h>

int main()
{
    int x = 19;
    int *p = &x;
    int **pp = &p;
    printf("The value of x is : %d\n", x);
    printf("The address of x is : %p\n", &x);
    printf("The address of x is : %p\n", (void *)p);
    printf("The value of x is : %d\n", *p);
    printf("The address of p is : %p\n", (void *)pp);
    printf("The value of p is : %p\n", (void *)*pp);
    printf("The value of x is : %d\n", **pp);
    printf("The address of pp is : %p\n", (void *)&pp);
}