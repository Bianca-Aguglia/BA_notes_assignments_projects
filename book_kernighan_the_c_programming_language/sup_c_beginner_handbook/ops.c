#include <stdio.h>

int main(void) {
	int a = 2;
	int b;
	b = a++;
	printf("a: %u\n", a);
	printf("b: %u\n", b);
	b = ++a;
	printf("a: %u\n", a);
        printf("b: %u\n", b);
}
