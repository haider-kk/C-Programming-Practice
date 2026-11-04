#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter the number for which Multipliacation table is required: ");
    scanf("%d", &a);
    printf("Enter the number of rows you want in the table: ");
    scanf("%d", &b);
    for (i = 1; i<=b; i++)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }

}