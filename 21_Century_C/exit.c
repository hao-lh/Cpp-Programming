#include <stdio.h>
#include <stdlib.h>  //exit, _Exit, et al.
#include <unistd.h>  //sleep

void wail() { fprintf(stderr, "OOOOooooooo.\n"); }

void on_death() {
    for (int i = 0; i < 4; i++) fprintf(stderr, "I'm dead.\n");
}

_Noreturn void the_count() {
    for (int i = 5; i-- > 0;) {
        printf("%i\n", i);
        sleep(1);
    }
    // quick_exit(1);
    //_Exit(1);
    exit(1);
}

int main() {
    at_quick_exit(wail);
    atexit(wail);
    atexit(on_death);
    the_count();
}
