// To find the maximum between two numbers using switch case.

#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    switch(a>b)
    {
        case 1 :
                printf("%d is the maximum",a);
                break;
        case 0 :
                printf("%d is the maximum",b);
    }
}