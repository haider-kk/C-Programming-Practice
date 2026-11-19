#include <stdio.h>
#include <ctype.h>

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
    fp2 = fopen("toupper.txt", "w");
    if(fp2 == NULL)
    {                                          
        printf("Destination File Opening cannot processss!!!!");
        fclose(fp1);
        return 1;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(toupper(ch),fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}       