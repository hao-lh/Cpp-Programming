#include <stdio.h>

int main() {
	char foo = 123;
	char *ptr = &foo;
	/** char const *cptr = &foo; */
	/** ptr = cptr; */

	char const *cptr = ptr;
}
