//
// Created by loay on 5/26/2024.
//
#define NULL 0

#include "stack.h"
#include "std_types.h"

/*
 * @brief: initialize the Stack and checking of any null pointers
 * @params: an adress of your desired Stack
 * @returns: R_NOT if the stack initialization field, ROK is it success.
 */

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
