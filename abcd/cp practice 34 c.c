#include <stdio.h>
#include <math.h>
void main()
{
    float a;

    printf ("Enter any value..");
    scanf ("%f",&a);

    printf ("The log base 10 of %f is %f ",a,log(a)/log(10));
}
