#include <stdio.h>
#include <stddef.h>

struct Normal {
    char a;
    int b;
    double c;
};

#pragma pack(1)
struct Packed1 {
    char a;
    int b;
    double c;
};

#pragma pack(2)
struct Packed2 {
    char a;
    int b;
    double c;
};

#pragma pack(4)
struct Packed4 {
    char a;
    int b;
    double c;
};

#pragma pack()

int main(void) {
    struct Normal n;
    struct Packed1 p1;
    struct Packed2 p2;
    struct Packed4 p4;

    printf("No pragma pack: size %zu\n", sizeof(n));
    printf("  &n.a = %p  offset %zu\n", (void *)&n.a, offsetof(struct Normal, a));
    printf("  &n.b = %p  offset %zu\n", (void *)&n.b, offsetof(struct Normal, b));
    printf("  &n.c = %p  offset %zu\n", (void *)&n.c, offsetof(struct Normal, c));

    printf("\n#pragma pack(1): size %zu\n", sizeof(p1));
    printf("  &p1.a = %p  offset %zu\n", (void *)&p1.a, offsetof(struct Packed1, a));
    printf("  &p1.b = %p  offset %zu\n", (void *)&p1.b, offsetof(struct Packed1, b));
    printf("  &p1.c = %p  offset %zu\n", (void *)&p1.c, offsetof(struct Packed1, c));

    printf("\n#pragma pack(2): size %zu\n", sizeof(p2));
    printf("  &p2.a = %p  offset %zu\n", (void *)&p2.a, offsetof(struct Packed2, a));
    printf("  &p2.b = %p  offset %zu\n", (void *)&p2.b, offsetof(struct Packed2, b));
    printf("  &p2.c = %p  offset %zu\n", (void *)&p2.c, offsetof(struct Packed2, c));

    printf("\n#pragma pack(4): size %zu\n", sizeof(p4));
    printf("  &p4.a = %p  offset %zu\n", (void *)&p4.a, offsetof(struct Packed4, a));
    printf("  &p4.b = %p  offset %zu\n", (void *)&p4.b, offsetof(struct Packed4, b));
    printf("  &p4.c = %p  offset %zu\n", (void *)&p4.c, offsetof(struct Packed4, c));

    return 0;
}