#include <stdio.h>
int max3(int a,int  b, int c);
int t;
int main()
{
    int a, b, c;
    printf("Enter your numbers (3 nos) : ");
    scanf("%d %d %d", &a, &b, &c);
    int t = max3(a,b,c);
    printf("%d is the largest among them ", t);
}
int max3(int a,int  b, int c)
{
    if(a > b && a > c)
        t = a;
    else if(b > a && b > c)
        t = b;
    else
         t = c;
}