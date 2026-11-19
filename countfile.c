#include <stdio.h>

int main()
{
    FILE *fp1;
    int ch, cc =0, lc =0, wc = 0, inWord = 0;
    char line[200];
    fp1 = fopen("myfile.txt", "r");
    if(fp1 == NULL)
    {
        printf("File Opening cannot processss!!!!");
        return 1;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        cc++;
    }
    rewind(fp1);    //after completing preceding loop, file pointer is already at the eof.
    while(fgets(line, sizeof(line), fp1) != NULL)
    {
        lc++;
    }
    rewind(fp1);
    while((ch = fgetc(fp1)) != EOF)
    {
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            wc++;
            inWord = 1;
        }
    }

    printf("Total Characters : %d\n", cc);
    printf("Total Words : %d\n", wc);
    printf("Total Lines : %d\n", lc);
    fclose(fp1);

    return 0;
        
}