#include <stdio.h>

int main() {
	if (-1 < (unsigned char)1)
		printf("-l is less than (unsigned char)1: ANSI semantics\n");
	else
		printf("-l NOT less than (unsigned char)1: K&R semantics\n");
}
