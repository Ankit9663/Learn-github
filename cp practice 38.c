#include <stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x1,x2;

    printf ("Enter coefficient of x^2..");
    scanf ("%f",&a);

    printf ("Enter coefficient of x..");
    scanf ("%f",&b);

    printf ("Enter constant term..");
    scanf ("%f",&c);

    d=(b*b)-(4*a*c);

    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;

    if (d==0)
    {
        printf ("Both root are same..\n");
        printf ("The root is %f",x1);
    }
    else if (d>0)
    {
        printf ("First root is %f\n ",x1);
        printf ("Second root is %f",x2);
    }
    else
    {
        printf ("There are no real roots for given equation..");
    }


}
