#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int ID;
    char Name[25];
    struct Date joindate;
};

int main()
{
    struct Employee emp;

    printf("Enter Employee name : ");
    scanf("%24[^\n]", emp.Name);
    printf("Enter employee ID : ");
    scanf("%d", &emp.ID);
    printf("Enter Joining date (DD MM YYYY) : ");
    scanf("%d %d %d", &emp.joindate.day,
                      &emp.joindate.month,
                      &emp.joindate.year);
    printf("\n\n\t\tEmployee details");
    printf("\n\nName : %s\n", emp.Name);
    printf("ID :  %d\n", emp.ID );
    printf("Joining Date : %02d/%02d/%04d\n",emp.joindate.day,
                                             emp.joindate.month,
                                             emp.joindate.year );
    return 0;
}