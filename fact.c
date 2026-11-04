#include <stdio.h>
int main()
{
    int f;
    printf("Enter the number : \n");
    scanf("%d", &f);
    int fac = 1;
    while (f>1)
    {
        fac = fac * (f);
        f = f - 1;
    }
    printf("The factorial Is %d ", fac);
}