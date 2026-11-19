#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];
    fp = fopen("myfile.txt", "w");
    if(fp==NULL)
    {
        printf("File Opening cannot processss!!!!");
        return 1;
    }
        
    fprintf(fp,"Haider Ali K K\n");
    fprintf(fp,"You are amazing!");
    fclose(fp);

    fp = fopen("myfile.txt", "r");
    if(fp==NULL)
    {
        printf("File Opening cannot processss!!!!");
        return 1;
    }

    printf("File Contents : \n");
    while(fgets(text, sizeof(text), fp) != NULL)
    {
        printf("%s", text);
    }
    fclose(fp);
    return 0;

}