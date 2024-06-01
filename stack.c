//
// Created by loay on 5/26/2024.
//
#define NULL 0

#include "stack.h"
#include "std_types.h"
#include <stdio.h>

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

stack_status_t stack_push(Stack * mystack, const int value) {
    stack_status_t ret;
    if((mystack == NULL) || STACK_FULL == stack_full(mystack)) {
        #ifdef DEBUG
            printf("error: STACK IS FULL\n");
        #endif
        ret = R_NOK;
    }else {
        mystack->stack_pointer++;
        mystack->data[mystack->stack_pointer] = value;
        #ifdef DEBUG
            printf("VALUE (%i) IS PUSHED TO THE STACK SUCCESSFULLY\n", value);
        #endif
        ret = ROK;
    }

    return ret;
}

stack_status_t stack_pop(Stack * mystack, int *value) {
    stack_status_t ret;
    if((mystack == NULL) || (value == NULL) ||STACK_EMPTY == stack_empty(mystack)) {
        #ifdef DEBUG
            printf("error: STACK IS EMPTY OR NULL POINTER DETECTED\n");
        #endif
        ret = R_NOK;
    }else {
        *value = mystack->data[mystack->stack_pointer];
        mystack->stack_pointer--;
        ret = ROK;
        #ifdef DEBUG
            printf("VALUE : (%i) IS POPED SUCCESSFULLY\n", *value);
        #endif
    }

    return ret;
}
stack_status_t stack_top(const Stack * mystack, int *value) {
    stack_status_t ret;

    if((mystack == NULL) || (value == NULL) || (stack_empty(mystack) == STACK_EMPTY)) {
        #ifdef DEBUG
            printf("STACK IS EMPTY OR NULL POINTER DETECTED\n");
        #endif
        ret = R_NOK;
    }else {
        *value = mystack->data[mystack->stack_pointer];
        #ifdef DEBUG
            printf("VALUE (%i) IS COPIED TO (0x%p) SUCCESSFULLY\n", *value, value);
        #endif
        ret = ROK;
    }

    return ret;
}

stack_status_t stack_size(const Stack * mystack, int *_size) {
    stack_status_t ret;

    if((mystack == NULL) || (_size == NULL)) {
        #ifdef DEBUG
                printf("NULL POINTER DETECTED\n");
        #endif
        ret = R_NOK;
    }else {
        *_size = mystack->stack_pointer+1;
        #ifdef DEBUG
                printf("STACK SIZE IS : %i\n", *_size);
        #endif
        ret = ROK;
    }
    return ret;
}

stack_status_t stack_display(const Stack * mystack) {
    stack_status_t ret;

    if((mystack == NULL) || (stack_empty(mystack) == STACK_EMPTY)) {
        ret = R_NOK;
        #ifdef DEBUG
                printf("STACK IS EMPTY OR NULL POINTER DETECTED\n");
        #endif
    }else {
        for(int i = mystack->stack_pointer; i>=0; i--) {
            printf("%i\n", mystack->data[i]);
        }
        ret = ROK;
    }

    return ret;
}

stack_status_t stack_display_reverse(const Stack * mystack) {
    stack_status_t ret;

    if((mystack == NULL) || (stack_empty(mystack) == STACK_EMPTY)) {
        ret = R_NOK;
        #ifdef DEBUG
                printf("STACK IS EMPTY OR NULL POINTER DETECTED\n");
        #endif
    }else {
        for(int i = 0; i<=mystack->stack_pointer; i++) {
            printf("%i\n", mystack->data[i]);
        }
        ret = ROK;
    }

    return ret;
}