#include <cstdio>

int bis(int x, int m)
{
    return x | m;
}
int bic(int x, int m)
{
    return x & ~m;
}

int bool_or(int x, int y)
{
    int result = bis(x, y);
    return result;
}

int bool_and(int x, int y)
{
    int result = bic(bis(x, y), bis(bic(x, y), bic(y, x)));
    return result;
}

int bool_xor(int x, int y)
{
    int result = bic(bis(x, y), bool_and(x, y));
    return result;
}

int main()
{
    printf("%.8x\n", bool_xor(0xf0f00, 0x0ff0f));
    printf("%.8x\n", bool_xor(0xff, 0xf0));
}