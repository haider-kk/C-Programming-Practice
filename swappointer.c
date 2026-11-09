#include <stdio.h>
int main()
{
    int a, b;
    int *p = &a, *q = &b;
    printf("Enter a number for variable 'a' : \n");
    scanf("%d", &a);
    printf("Enter a number for variable 'b' : \n");
    scanf("%d", &b);
    printf("The old value of a is : %d \n",*p);
    printf("The old value of b is : %d \n",*q);
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("The new value of a is : %d \n",*p);
    printf("The new value of b is : %d \n",*q);
}