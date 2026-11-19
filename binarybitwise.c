#include <stdio.h>

int main()
{
    int a, i;
    int b;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i=7;i>=0;i--)
    {
        b = (a >> i)& 1;
        printf("%d", b);
    }
    return 0;
}