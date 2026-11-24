#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, sum = 0;
    float avg;
    int *arr;
    printf("How many numbers you wanna enter : ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));

    if (arr==NULL)
    {
        printf("Mempry Allocation Failed!");
        return 1;
    }
    printf("\nEnter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    } 
    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average : %.2f\n", avg);

    free(arr);
    arr = NULL;

    return 0;
}