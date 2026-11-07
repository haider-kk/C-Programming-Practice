#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the no of numbers : ");
    scanf("%d", &n);
    int a[n], temp;
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        printf("Enter %d pos number : ", i+1);
        scanf("%d",&a[i]);
    } 
    printf("The original array is : \n");
    for(i=0;i<n;i++)
    {
        printf(" %d\t",a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    printf("\nThe Reversed array : \n");
    for(i=0;i<n;i++)
    {
        printf(" %d\t",a[i]);
    }

}