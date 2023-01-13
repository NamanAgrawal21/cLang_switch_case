// To check whether a number is even or odd using switch case.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1 :
                printf("%d is a even number",n);
                break;
        case 0 :
                printf("%d is a odd number",n);
    }
}