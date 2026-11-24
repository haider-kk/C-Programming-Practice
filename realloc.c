#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0;
    float avg;
    int *arr, *temp;
    arr = malloc(5 * sizeof(int));

    if (arr==NULL)
    {
        printf("Memory Allocation Failed!");
        return 1;
    }
    printf("\nInitial values : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t", arr[i]);
    } 
    printf("\nEnter 5 numbers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    } 
    printf("\nAssigned values : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t", arr[i]);
    }
    temp = realloc(arr, 10 * sizeof(int));
    if(temp == NULL)
    {
        printf("Reallocation failed !");
        free(arr);
        return 1;
    }

    arr = temp;
    printf("\nEnter 5 more numbers : ");
    for(i=5;i<10;i++)
    {
        scanf("%d", &arr[i]);
    } 
    printf("\nAll 10 Assigned values : ");
    for(i=0;i<10;i++)
    {
        printf("%d\t", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}