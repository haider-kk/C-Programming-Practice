#include <stdio.h>
int main()
{
    long long i ;
    long long a;
    long long count = 0;
    printf("Enter the number : ");
    scanf("%lld", &a);
    for(i=1;i<=a/2;i++)
    {
        if( a%i == 0)
        {
            count++;
        }
    }
    if (count>1)
        printf("%lld is not a prime number ",a );
    else
        printf("%lld is a prime number ", a);
}