// To check whether a number is positive , negative or zero using switch case.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1 :
                printf("%d is a positive number",n);
                break;
        case 0 :
                switch(n<0)
                {
                    case 1 :
                            printf("%d is a negative number",n);
                            break;
                    case 0 :
                            printf("%d is zero",n);
                }
    }
}
