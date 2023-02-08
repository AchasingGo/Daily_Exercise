#include <stdio.h>

void main() {
	int str = 10;
	int* Ptr = &str;
	int** ptr = &Ptr;
	printf("%p\n", Ptr);
	printf("%p\n", ptr);

}