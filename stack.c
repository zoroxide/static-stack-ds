//
// Created by loay on 5/26/2024.
//
#define NULL 0

#include "stack.h"
#include "std_types.h"

return_statue_t stack_init(Stack * my_stack) {
    return_statue_t ret;
    if(my_stack == NULL) {
        ret = R_NOK;
    } else {
        my_stack->stack_pointer = -1;
        ret = ROK;
    }
    return ret;
}
