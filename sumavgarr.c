#include <stdio.h>
int main()
{
    int n, a[n], i, sum = 0;
    printf("Enter the no of numbers : ");
    scanf("%d", &n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        printf("Enter %d pos number : ", i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
        sum = sum + a[i];
    }
    printf("\nThe sum is %d", sum);
    printf("\nThe Average is %d", sum/n);
}
