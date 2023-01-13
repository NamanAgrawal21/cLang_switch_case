// To create a simple calculator using switch case.

#include <stdio.h>
void main()
{
    float a,b;
    char ch;
    printf("***Welcome to the calculator***\n");
    printf("Enter [num-1][+ - * /][num-2]:");
    scanf("%f %c %f",&a,&ch,&b);
    switch(ch)
    {
        case '+' :
                printf("Result=%.2f",a+b);
                break;
        case '-' :
                printf("Result=%.2f",a-b);
                break;
        case '*' :
                printf("Result=%.2f",a*b);
                break;
        case '/' :
                printf("Result=%.2f",a/b);
                break;
    }
}