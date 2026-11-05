#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main()
{
    int a, t, b, r;
    char op;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number ");
    scanf("%d", &b);
    printf("Enter your operation : (+,-,*,/) :  ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
            r = add(a,b);
            printf("Result is %d", r);
            printf("\n\nEnter 1 to continue, else 0 to stop");
            scanf("%d",&t);
            if(t==1)
                main();
            break;
        case '-' :
            r = sub(a,b);
            printf("Result is %d", r);
            printf("\n\nEnter 1 to continue, else 0 to stop");
            scanf("%d",&t);
            if(t==1)
                main();
            break;
        case '*':
            r = mul(a,b);
            printf("Result is %d", r);
            printf("\n\nEnter 1 to continue, else 0 to stop");
            scanf("%d",&t);
            if(t==1)
                main();
            break;
        case '/' :
            if(b==0)
            {
                printf("Division by 0 is not opearable ");
                printf("\n\nEnter 1 to continue, else 0 to stop");
                scanf("%d",&t);
                if(t==1)
                    main();
            }
            else
            {
                r = div(a,b);
                printf("Result is %d", r);
                printf("\n\nEnter 1 to continue, else 0 to stop");
                scanf("%d",&t);
                if(t==1)
                main();
            }
            break;
        default :
            printf("\n Entered operator is not valid!! Sorry...");
    }
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a/b;
}