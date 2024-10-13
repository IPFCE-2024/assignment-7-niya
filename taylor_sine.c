/*To create this sine taylor series, I used Professor Jens Bennedsen's factorial function code,
author's email: jbb@ece.au.dk, date it was accessed: 10/10/2024 */

#include "taylor_sine.h"

double taylor_sine(double x, int n) {
  // implement your function here

  assert(n > 0);

  double a = 0; //gives sin x
  double f; /* factorial */
  double g; /* previous factorial */
  int j; /* counter variable for factorial */
  int k; /* counter variable for multiplication */

  for(double i = 1; i < n; i++)
  {
    /* precondition */
    assert(i >= 0);
    
   //Jens's Factorial function
    g = 1;
    f = 1;
    for (j = 0; j < (2 * i - 1); j = j + 1)
    {   /* invariant: f equals factorial of j
         *            0 <= j <= i
         */
        for (k = 0; k < j; k = k + 1)
        { /* invariant: g = (k + 1) * f
           *            0 <= k <= i 
           */
            g = g + f;
        }
        f = g;
    }   
    //postcondition: estimating sin(x) using taylor series
    a = a + (pow(-1, (i + 1)) * pow((x), (2 * i - 1))/f); //adding previous term to new term
  }

  //as sin(x) must be in between -1 and 1
  if (a <= 1 && a >= -1 )
  {
    return a;
  }
  else
  {
    return -1.0;
  }
}