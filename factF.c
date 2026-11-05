#include <stdio.h>
int fact(int a);
int b, t;
int main()
{
    printf("Pls enter the number : ");
    scanf("%d", &b);
    t = fact(b);
    printf("The factorial of %d is %d", b, t);
}
int fact(int a)
{
    if(a==0)
        return 1;
    t = a * fact(a-1);
    return t;
}