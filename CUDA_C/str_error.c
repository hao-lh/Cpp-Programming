#include <errno.h>
#include <stdio.h>
#include <string.h>

int main() {
	FILE* pFile;
	pFile = fopen("non-exist.txt", "r");
	if (pFile == NULL)
		printf(
		    "Error while opening file non-exist.txt: %s:%d, errno=%d, "
		    "msg=%s\n",
		    __FILE__, __LINE__, errno, strerror(errno));
	else
		printf("Opened file successfully!\n");
	return 0;
}
