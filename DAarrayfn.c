#include <stdio.h>
#include <stdlib.h>

int *makeArray(int n)
{
    int *arr;
    arr = malloc(n * sizeof(int));
    if(arr == NULL)
    {
        return NULL;
    }
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main()
{
    int n;
    int *ptr;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }
    
    ptr = makeArray(n);
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed!");
        return 1;
    }
    printf("\nArray Elements : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr = NULL;
    return 0;
}