#include <stdio.h>

int main()
{
    FILE *fp1;
    int ch, num,sum = 0;
    char line[200];
    fp1 = fopen("myfile.txt", "r");
    if(fp1 == NULL)
    {
        printf("File Opening cannot processss!!!!");
        return 1;
    }
    while(fscanf(fp1, "%d", &num) == 1)
    {
        sum += num;
    }
    printf("\nThe sum of numbers present in  the file is %d", sum);

    fclose(fp1);
    return 0;
}