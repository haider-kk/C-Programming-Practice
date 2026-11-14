#include <stdio.h>
int main()
{
    int x = 19;
    int *p = &x;
    int **pp = &p;
    printf("The old value of x is : %d\n",**pp);
    **pp = 100;
    printf("The new value of x is : %d\n",**pp);

    return 0;
}