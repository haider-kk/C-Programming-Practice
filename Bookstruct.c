#include <stdio.h>
struct Book {
        char title[50];
        float price;
        int pages;
};
int main()
{
    struct Book book1;
    printf("Enter the title of the book : ");
    scanf(" %99[^\n]", book1.title);
    printf("Enter the price of the book : ");
    scanf("%f", &book1.price);
    printf("Enter the pages of the book : ");
    scanf("%d", &book1.pages);

    printf("\n\n\t\t\tBook Details \n");
    printf("\nTitle : %s",book1.title);
    printf("\nPrice : %.2f",book1.price);
    printf("\nPages : %d",book1.pages);
    return 0;
}