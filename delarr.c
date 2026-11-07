#include <stdio.h>
int main()               
{
    int n, i,k,j, t, pos;
    printf("Enter the no of numbers : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d pos number : ", i+1);
        scanf("%d",&a[i]); 
    }
    printf("Enter the position you wanna delete the number : ");
    scanf("%d",&pos); 
    for(i=pos-1;i<n;i++)
    {
        a[i] = a[i+1];
    }
    n--;
    printf("The new array is : ");
    for(i=0;i<n;i++)
    {
        printf("\t %d  ", a[i]);
    }
}