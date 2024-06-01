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

static stack_status_t stack_full(const Stack * mystack) {
    if(mystack->stack_pointer == (STACK_MAX_SIZE - 1)) {
        return STACK_FULL;
    }else {
        return STACK_NOT_FULL;
    }
}

static stack_status_t stack_empty(const Stack * mystack) {
    if(mystack->stack_pointer == -1) {
        return STACK_EMPTY;
    }else {
        return stack_full(mystack);
    }
}

stack_status_t stack_push(const Stack * mystack, uint32_t value) {

}

stack_status_t stack_pop(const Stack * mystack, uint32_t *value) {

}

stack_status_t stack_top(const Stack * mystack, uint32_t *value) {

}

stack_status_t stack_size(const Stack * mystack, uint32_t *_size) {

}

stack_status_t stack_display(const Stack * mystack) {

}