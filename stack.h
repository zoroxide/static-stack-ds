//
// Created by loay on 5/26/2024.
//

#ifndef STACK_H
#define STACK_H
#include "std_types.h"

#define STACK_MAX_SIZE 5
#define DEBUG

typedef struct stack_ds {
    uint32_t stack_pointer;
    uint32_t data[STACK_MAX_SIZE];
} Stack;

typedef enum stack_statue {
 STACK_FULL,
 STACK_EMPTY,
 STACK_NOT_FULL
} stack_status_t;


return_statue_t stack_init(Stack * my_stack);

stack_status_t stack_push(Stack * mystack, const uint32_t value);

stack_status_t stack_pop(Stack * mystack, uint32_t *value);

stack_status_t stack_top(const Stack * mystack, uint32_t *value);

stack_status_t stack_size(const Stack * mystack, uint32_t *_size);

stack_status_t stack_display(const Stack * mystack);

stack_status_t stack_display_reverse(const Stack * mystack);

static stack_status_t stack_full(const Stack * mystack);

static stack_status_t stack_empty(const Stack * mystack);



#endif //STACK_H
