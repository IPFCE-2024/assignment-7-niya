#include "stack.h"
#include <stdio.h>

int main(void)
{
    /*TEST 1:
    testing the push, pop and initialize functions.*/
    stack s;
    initialize(&s);
    push(4, &s);
    push(5, &s);
    push(6, &s);
    pop(&s);
    int y = pop(&s); //Testing if pop also returns the second removed variable

    if (s.head->data == 4 && y == 5)
    {
        printf("test 1 success\n");
    }
    else
    {
        printf("test 1 failed\n");
    }

    /*TEST 2:
    testing empty function*/
   stack t;

   if(empty(&t) == 0) //meaning it is empty 
   {
    printf("test 2 success\n");
   }

   else
   {
    printf("test 2 failed\n");
   }

   //TEST 3: testing full function

   if(full(&t) == 0) //meaning it is not full 
   {
    printf("test 3 success\n");
   }

   else
   {
    printf("test 3 failed\n");
   }

   /*TEST 4:
   testing if the push, pop function work without initialisation*/

    push(10, &t);
    push(6, &t);
    push(45, &t);
    pop(&t);

   if(empty(&t) == 0) //stack should still be empty without initialization 
   {
    printf("test 4 success\n");
   }

   else
   {
    printf("test 4 failed\n");
   }

return 0;
}