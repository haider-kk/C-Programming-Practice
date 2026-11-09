#include <stdio.h>
int main()
{
    int a;
    int *p = &a;
    printf("Enter a number for variable 'a' : \n");
    scanf("%d", &a);
    printf("The old value of a is : %d \n",a);
    printf("The address of a is  : %p\n", (void *)p);
    printf("The old value of a with pointer is : %d\n", *p);
    *p = 90;
    printf("The new value of a is : %d \n",a);
    printf("The address of a is  : %p\n", (void *)p);
    printf("The new value of a with pointer is : %d\n", *p);
}