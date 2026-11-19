#include <stdio.h>
struct Students {
        char name[50];
        int rollno;
        float mark;    
};

int main()
{
    struct Students stud[100];
    int i, n;
    float sum = 0, avg;
    printf("How many students records you wish to subvmit : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter deatils of Student %d", i+1);
        printf("\nEnter the name of the student : ");
        scanf(" %49[^\n]", stud[i].name);
        printf("Enter the Roll No of the student : ");
        scanf("%d", &stud[i].rollno);
        printf("Enter the marks of the student : ");
        scanf("%f", &stud[i].mark);
        sum = sum + stud[i].mark;
    }
    printf("\n\n\t The Student Details : ");
    avg = sum/n;
    printf("\nThe Average marks of the students is : %f", avg);
    for(i=0;i<n;i++)
    {
        printf("\n\nName : %s", stud[i].name);
        printf("\nRoll No  : %d",stud[i].rollno);
        printf("\nMarks : %.2f ",stud[i].mark);
        if(stud[i].mark >= avg)
        {
                printf("\n Got marks greater than Average ? : YES");
        }
        else
                printf("\n Got marks greater than Average ? : NO");
    }
    return 0;
}