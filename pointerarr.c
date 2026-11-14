#include <stdio.h>
int main()
{
    int i;
    char *names[] = {"Haider", "Mujeeb", "Shuaib", "Maryam", "Ashker", "Shareef", "shana"};
    char **p = names;
    for(i=0;i<7;i++)
    {
        printf("%s \n", *(p+i));
    }
} 