#include <stdio.h>

int main(void) {
//     for (int i=1; i<=10; i++) {
//         printf("%u\n", i);
//     }
    
//     for (int i=10; i>0; i--) {
//         printf("%u\n", i);
//     }
    
    int i = 0;
    
    while (i < 10) {
        printf("%u\n", i);
        i++;
    }
    
    printf("i after loop: %u\n", i);
    
    do {
        printf("%u\n", i);
        i--;
    } while (i >0);
}