#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];
    fp = fopen("myfile.txt", "a");
    if(fp==NULL)
    {
        printf("File Opening cannot processss!!!!");
        return 1;
    }
    fprintf(fp,"\nBe happy Bro!..");
    fclose(fp);

    printf("File Contents : \n");
    fp = fopen("myfile.txt", "r");
    while(fgets(text, sizeof(text), fp) != NULL)
    {
        printf("%s", text);
    }
    fclose(fp);
    return 0;

}