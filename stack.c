#include "stack.h"

void initialize(stack *s) {
  // implement initialize here
  s = malloc(sizeof(node)); //allocating new memory to store the stack
  s->head = NULL; 
}

void push(int x, stack *s) {
  // implement push here

  /*introducing a temporary pointer to store our new
  data while using pointer s->head to keep track of 
  the rest of the stack*/
  node *temp = NULL; 
  temp = malloc(sizeof(node));
  temp->next = s->head;
  temp->data = x;
  s->head = temp; /*adding new data to the rest of the stack*/
}

int pop(stack *s) {
  // implement pop here
  if(s->head != NULL)
  {
    int retvar; //return variable
    /*return variable contains the data removed 
    from top of stack*/
    retvar = s->head->data; 
    s->head = s->head->next; /*pointer s pointing to next element in stack*/

    return retvar;
  }

  else;
  {
    return -1; /*if no data is found at the top of the stack, -1 is returned*/
  }
}

bool empty(stack *s) {
  // implement empty here

  /*if pointer s->head points to nothing, then there is no stack
  hence, it's empty*/
  if (s->head != NULL) 
  {
  return false;
  }
  else
  {
    return true;
  }
}

bool full(stack *s) {
  // implement full here
  node *temp = NULL;
  temp = malloc(sizeof(node));
  /*stack is full when there's no more memory left to allocate
  hence, memory allocation fails*/
  if (temp != NULL)
  return false;
}
