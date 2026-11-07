#include <stdio.h>
int main()
{
    int n, i,k,j;
    printf("Enter the no of numbers : ");
    scanf("%d", &n);
    int a[n], ec = 0, oc = 0;
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        printf("Enter %d pos number : ", i+1);
        scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d\t", a[i]);
    }
}