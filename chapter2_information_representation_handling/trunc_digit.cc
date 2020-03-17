#include <cstdio>

int main()
{
    int x = 53191;
    short sx = (short) x;
    int y = sx;

    printf("x: %d, %u, %x\n", x, x, x);
    printf("x: %d, %u, %x\n", sx, sx, sx);
    printf("x: %d, %u, %x\n", y, y, y);
}