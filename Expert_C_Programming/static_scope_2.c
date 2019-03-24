#include <stdio.h>

static int foo(int idx)
/** extern int foo(int idx) */
/** int foo(int idx) */
{
	printf("idx = %d\n", idx);
	return 0;
}
