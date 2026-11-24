#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, sum = 0;
    float avg;
    int *arr;
    printf("How many numbers you wanna enter : ");
    scanf("%d", &n);
    arr = calloc(n, sizeof(int));

    if (arr==NULL)
    {
        printf("Memory Allocation Failed!");
        return 1;
    }
    printf("\nInitial values : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    } 
    printf("\nEnter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    } 
    printf("\nAssigned values : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    } 
    avg = (float)sum / n;

    printf("\nSum = %d\n", sum);
    printf("Average : %.2f\n", avg);

    free(arr);
    arr = NULL;

    return 0;
}