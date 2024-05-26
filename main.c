#include <stdio.h>
#include "stack.h"

Stack stack1;

int main(void) {
    if(stack_init(&stack1) == R_NOK) {
        printf("Stack didn't initialized successfully");
    }
    return 0;
}
