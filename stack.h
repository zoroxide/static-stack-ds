//
// Created by loay on 5/26/2024.
//


#ifndef STACK_H
#define STACK_H
#include "std_types.h"

#define STACK_MAX_SIZE 5

typedef struct stack_ds {
    uint32_t stack_pointer;
    uint32_t data[STACK_MAX_SIZE];
} Stack;


/*
 * @brief: initialize the Stack and checking of any null pointers
 * @params: an adress of your desired Stack
 * @retval: R_NOT if the stack initialization field, ROK is it success.
 */
return_statue_t stack_init(Stack * my_stack);


#endif //STACK_H
