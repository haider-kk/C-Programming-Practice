#include <stdio.h>
int main()
{
    int a, r = 0, rev = 0, i,d ;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    for(a;a>0;a = a/10)  //use while loop while(a>0)
    {
        d = a%10;
        r = r + d;
        rev = rev * 10 + d;
        
    }
    printf("The sum of didgits is %d",r);
    printf("\nThe REverse is %d", rev);
}