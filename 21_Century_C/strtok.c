#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "- This, a sample string.";
    /* printf("string before alter: %s", str); */
    printf("string before alteration:\n");
    size_t strl = strlen(str);
    for (size_t i=0; i<strl; i++)
        printf("%c", str[i]);
    printf("\n-----completion-----\n");

    printf("Splitting string \"%s\" into tokens:\n", str);
    char* pch = strtok(str, " ,.-");
    while (pch) {
        printf("%s\n", pch);
        pch = strtok(NULL, " ,.-");
    }
    /* printf("string after alter: %s", str); */
    printf("string after alteration:\n");
    for (size_t i=0; i<strl; i++)
        if (str[i]!='\0')
            printf("%c", str[i]);
        else
            printf("%c", '*');
    printf("\n-----completion-----\n");

    return 0;
}
