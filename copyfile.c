#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;
    fp1 = fopen("myfile.txt", "r");
    if(fp1 == NULL)
    {
        printf("Source File Opening cannot processss!!!!");
        return 1;
    }
    fp2 = fopen("copy.txt", "w");
    if(fp2 == NULL)
    {
        printf("Destination File Opening cannot processss!!!!");
        return 1;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
        
}