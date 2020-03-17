#include <cstdio>

int main()
{
    short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);
    printf("v = %x, uv = %x\n", v, uv);

    unsigned u = 4294967295u;
    int tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);
    printf("u = %x, tu = %x\n", u, tu);

    unsigned i = 2147483648u;
    printf("u = %x", i);
    printf("u = %d, u=%u", i, i);
}