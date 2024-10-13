#include <math.h>
#include <stdio.h>
#include "taylor_sine.h"


void test(double a)
{
    printf("\n New test:\n");
    double c = sin(a); 
    printf("ANSI C function: sin(%f) = %f\n", a, c);

    
    printf("\n Taylor series function:\n");
    printf("for x = 3: taylor_sine( %f ) = %f\n", a, taylor_sine(a, 3));
    printf("for x = 15: taylor_sine( %f ) = %f\n", a, taylor_sine(a, 15));
    printf("for x = 50: taylor_sine( %f ) = %f\n", a, taylor_sine(a, 50));
    printf("for x = 100: taylor_sine( %f ) = %f\n", a, taylor_sine(a, 100));


}

int main(void)
{
    double pi = 3.14;
    
    //test 1
    test(pi); 

    //test 2
    double a =  3 * pi;
    test(a/2);

    //test 3
    test(6*pi);

    //test 4
    test(pi/2);

    /* TEST RESULTS:
    For all the tests, the results given for when x = 100, x = 50 and ANSI C sine function
    were identical. Otherwise, for x = 15, the results had varying degrees of accuracy
    when compared to the ANSI C sine function. Finally x = 3 was generally very far off 
    from the actual result. So, it's reasonable to say that increasing the number of
    Taylor Series terms leads to a more accurate result. 
    */

    return 0;
}