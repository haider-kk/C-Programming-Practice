#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pos, choice, k = 1;
    unsigned int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(k==1)
    {
        printf("\nChoose an Operation : ");
        printf("\n1. Set a bit \n2. Clear a bit \n3. Toggle a bit \n4. Check a bit\n\n Enter your Choice : ");
        scanf("%d", &choice);
        printf("\nEnter bit position : ");
        scanf("%d", &pos);
        switch(choice)
        {
            case 1:
                num = num | (1U << pos);
                printf("Result : %u", num);
                break;
            
            case 2:
                num = num & ~(1U << pos);
                printf("Result : %u", num);
                break;
            
            case 3:
                num = num ^ (1U << pos);
                printf("Result : %u", num);
                break;
            
            case 4:
                if(num & (1U << pos))
                    printf("Bit is SET");
                else 
                    printf("Bit is CLEAR");
                break;

            default :
                printf("\nEntered Choice is not valid.");
                break;
        }
        printf("\nDo you want to continue : 1 - YES, 2 - NO");
        scanf("%d", &k);
    }
}