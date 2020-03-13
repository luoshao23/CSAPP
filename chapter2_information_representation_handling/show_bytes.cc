#include <cstdio>
#include <cstring>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; ++i)
        printf(" %.2x", start[i]);
    printf("\n");
}


int main()
{
    short xshort = 3;
    int xint = 3;
    long xlong = 3;
    float xfloat = 3;
    int *xp = &xint;
    show_bytes((byte_pointer)&xshort, sizeof(short));
    show_bytes((byte_pointer) &xint, sizeof(int));
    show_bytes((byte_pointer)&xlong, sizeof(long));
    show_bytes((byte_pointer)&xfloat, sizeof(float));
    show_bytes((byte_pointer)xp, sizeof(void *));
    // show_bytes((byte_pointer) &void *, sizeof(void *));

    int val = 0x87654321;
    show_bytes((byte_pointer)&val, 1);
    show_bytes((byte_pointer)&val, 2);
    show_bytes((byte_pointer)&val, 3);

    const char *s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
}