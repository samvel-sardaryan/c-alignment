#include <stdio.h>
#include <stddef.h>

struct Original {
    char a;
    int b;
    double c;
};

struct Reordered {
    double c;
    int b;
    char a;
};

struct Worst {
    char a;
    double c;
    int b;
};

int main(void) {
    struct Original o;
    struct Reordered r;
    struct Worst w;

    printf("Original (char, int, double): size %zu\n", sizeof(o));
    printf("  &o   = %p\n", (void *)&o);
    printf("  &o.a = %p  offset %zu\n", (void *)&o.a, offsetof(struct Original, a));
    printf("  &o.b = %p  offset %zu\n", (void *)&o.b, offsetof(struct Original, b));
    printf("  &o.c = %p  offset %zu\n", (void *)&o.c, offsetof(struct Original, c));

    printf("\nReordered (double, int, char): size %zu\n", sizeof(r));
    printf("  &r   = %p\n", (void *)&r);
    printf("  &r.c = %p  offset %zu\n", (void *)&r.c, offsetof(struct Reordered, c));
    printf("  &r.b = %p  offset %zu\n", (void *)&r.b, offsetof(struct Reordered, b));
    printf("  &r.a = %p  offset %zu\n", (void *)&r.a, offsetof(struct Reordered, a));

    printf("\nWorst (char, double, int): size %zu\n", sizeof(w));
    printf("  &w   = %p\n", (void *)&w);
    printf("  &w.a = %p  offset %zu\n", (void *)&w.a, offsetof(struct Worst, a));
    printf("  &w.c = %p  offset %zu\n", (void *)&w.c, offsetof(struct Worst, c));
    printf("  &w.b = %p  offset %zu\n", (void *)&w.b, offsetof(struct Worst, b));

    return 0;
}