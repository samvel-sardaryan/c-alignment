#include <stdio.h>
#include <stdint.h>

int main(void) {
    int i = 10;
    char c = 'A';
    double d = 3.14;
    short s = 5;

    printf("Type    Size   Address           Address %% Size\n");
    printf("int     %zu      %p    %lu\n", sizeof(i), (void *)&i, (uintptr_t)&i % sizeof(i));
    printf("char    %zu      %p    %lu\n", sizeof(c), (void *)&c, (uintptr_t)&c % sizeof(c));
    printf("double  %zu      %p    %lu\n", sizeof(d), (void *)&d, (uintptr_t)&d % sizeof(d));
    printf("short   %zu      %p    %lu\n", sizeof(s), (void *)&s, (uintptr_t)&s % sizeof(s));

    return 0;
}