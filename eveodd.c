#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the no of numbers : ");
    scanf("%d", &n);
    int a[n], ec = 0, oc = 0;
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        printf("Enter %d pos number : ", i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            ec++;
        else
            oc++;
    }
    printf("\nEven count  : %d \n Odd count : %d ", ec,oc);
} 