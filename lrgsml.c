#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    int smal, larg, slarg;
    printf("\nEnter the no of numbers : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        printf("Enter %d pos number : ", i+1);
        scanf("%d",&a[i]);
        if(i==0)
        {
            larg = a[0];
            smal = a[0];
            slarg = a[0];
        }
        else
        {
            if(a[i]>larg)
            {
                slarg = larg;
                larg = a[i];
            }
            else if(a[i] < larg && (slarg == larg || a[i] > slarg))
                slarg = a[i];
            if(a[i]<smal)
                smal = a[i];
        }
    }
    printf("\n %d is the largest ", larg);
    printf("\n %d is the second largest ", slarg);
    printf("\n %d is the smallest ", smal);
}