#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;
    char text[100] = "Hello Haider";
    str = malloc((strlen(text) + 1) * sizeof(char));
    if(str == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    strcpy(str, text);
    printf("Copied string : %s\n", str);
    free(str);
    str = NULL;

    return 0;
}