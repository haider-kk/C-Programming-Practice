#include <stdio.h>
#include <stdbool.h>
bool isprime(int n);
int main()
{
    int a;
    bool t;
    printf("Enter the number : ");
    scanf("%d", &a);
    t = isprime(a);
    if(t==true)
    {
        printf("%d is a prime number ", a);
    }
    else
    {
        printf("%d is not a prime number ", a);
    }
}

bool isprime(int n)
{
    int count = 0;
    if(n<2)
        return false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count>0)
        return false;
    else
        return true;
}
