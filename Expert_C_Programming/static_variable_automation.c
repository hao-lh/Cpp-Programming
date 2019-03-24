#include <stdio.h>

void generate_initializer(char *str) {
	static char seperator = ' ';
	printf("%c %s\n", seperator, str);
	seperator = ',';
}

int main() {
	for (int i = 0; i < 10; i++) generate_initializer("hello");
}
