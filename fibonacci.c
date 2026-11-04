#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter vno of ternms in the sequience to be generated : ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    for(i=1;i<=n;i++)
    {
        printf("%d \t\t\t",a);
        c = a + b;
        a = b;
        b = c;
    }
}