#include "stack.h"
#include "std_types.h"

Stack mys;
uint32_t pop_data, top_data, size_data = 0;

int main() {
    stack_init(&mys);
    stack_push(&mys, 11);
    stack_push(&mys, 55);
    stack_push(&mys, 66);
    stack_push(&mys, 44);
    stack_push(&mys, 77);

    stack_display(&mys);
}