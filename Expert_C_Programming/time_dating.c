#include <time.h>
#include <stdio.h>

int main()
{
	//typedef long time_t
	time_t biggest = 0x7FFFFFFF;
	
	// ctime converts argument to local time
	printf("local biggest = %s", ctime(&biggest) );

	// CUT	
	printf("biggest = %s", asctime(gmtime(&biggest)) );
	return 0;
}
