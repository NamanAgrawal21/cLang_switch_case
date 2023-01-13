// To find the roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,dis,r1,r2,d;
    printf("Enter the values of a,b nd c of quad eq ax^2 + bx +c:");
    scanf("%f %f %f",&a,&b,&c);
    dis=(b*b)-(4*a*c);
    switch(dis>0)
    {
        case 1 :
                r1=(-b + sqrt(dis))/(2*a);
                r2=(-b - sqrt(dis))/(2*a);
                printf("Two real and distinct roots are %.2f and %.2f",r1,r2);
                break;
        case 0 :
                switch(dis<0)
                {
                    case 1 :
                            r1=-b/(2*a);
                            r2=-b/(2*a);
                            d=sqrt(dis)/(2*a);
                            printf("Two distinct imaginary roots are %.2f+i%.2f and %.2f-i%.2f",r1,d,r2,d);
                            break;
                    case 0 :
                            r1=r2=-b/(2*a);
                            printf("Two equal real roots are %.2f and %.2f",r1,r2);
                }
    }
}
