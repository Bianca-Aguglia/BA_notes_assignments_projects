#include <stdio.h>

int main(void) {
    int age = 44;
    printf("age value: %u\n", age);
    printf("age pointer: %p\n", &age);
    
    int *pointer = &age;
    printf("\npointer_value: %p\n", pointer);
    printf("points to: %u\n", *pointer);
}