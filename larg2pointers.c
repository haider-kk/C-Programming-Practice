#include <stdio.h>
int larger(int *p, int *q);
int main()
{
    int a, b, l;
    int *p = &a, *q = &b;
    printf("Enter a number for variable 'a' : \n");
    scanf("%d", &a);
    printf("Enter a number for variable 'b' : \n");
    scanf("%d", &b);
    printf("The value of a is : %d \n",*p);
    printf("The value of b is : %d \n",*q);
    l = larger(p, q);
    printf("The largest of them is %d", l);
}
int larger(int *p, int *q)
{
    if(*p > *q)
        return *p;
    else    
        return *q;
}
