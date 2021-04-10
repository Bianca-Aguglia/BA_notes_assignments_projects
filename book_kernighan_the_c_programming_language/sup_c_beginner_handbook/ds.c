// data structures

#include <stdio.h>
#include <string.h>

int main(void) {
    int nums_1[7] = {1, 2, 3, 4, 5, 6, 7};
    int nums_2[7];
    int nums_3[7] = {1, 2, 3, 4, 5, 6, 7};
    int nums_4[7];
    char name[7] = "bianca";
    
    printf("\nsize of nums_1: %u\n", sizeof(nums_1));
    printf("nums_1: ");
    
    for (int i=0; i<sizeof(nums_1); i++) {
        printf("%u ", nums_1[i]);
    }
    
    printf("\n\nsize of nums_2: %u\n", sizeof(nums_2));
    printf("nums_2: ");
    for (int i=0; i<sizeof(nums_2); i++) {
        nums_2[i] = i;
        printf("%u ", nums_2[i]);
    }
    
    int len_3 = strlen(nums_3);
    printf("\n\nsize of nums_3: %u\n", sizeof(nums_3));
    printf("len of nums_3: %u\n", len_3);
    printf("nums_3: ");
    
    for (int i=0; i< len_3; i++) {
        printf("%u ", nums_3[i]);
    }
    
    int len_4 = strlen(nums_4);
    printf("\n\nsize of nums_4: %u\n", sizeof(nums_4));
    printf("len of nums_4: %u\n", len_4);
    printf("nums_4: ");
    for (int i=0; i<len_4; i++) {
        nums_4[i] = i;
        printf("%u ", nums_4[i]);
    }
    
    printf("\n\nname: %s\n", name);
}

// follow-up on this (sizes don't make sense)