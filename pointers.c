#include <stdio.h>
int main()
{
    int a;
    int *p = &a;
    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("The value is : %d \n",a);
    printf("The address is  : %p\n", (void *)p);
    printf("The value is : %d\n", *p);
    printf("The address is : %p\n", (void *)&a);
}