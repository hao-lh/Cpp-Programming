#include <stdio.h>

int main() {
	int opt = 10;
	switch (opt) {
		case 0:
			printf("case 0\n");
			break;
		case 1:
			printf("case 1\n");
			break;
		default:
			printf("case default\n");
			break;
		case 10:
			printf("case 10\n");
			break;
	}
}
