#include <cstdio>

bool isEqual(int x, int y)
{
    return !(x^y);
}

int main()
{
    int x = 0x66, y = 0x39;

    printf("%x\n", x & y);
    printf("%x\n", x | y);
    printf("%x\n", ~x | ~y);
    printf("%x\n", x & !y);
    printf("%x\n", x && y);
    printf("%x\n", x || y);
    printf("%x\n", !x || !y);
    printf("%x\n", x && ~y);

    printf("%d\n", isEqual(5, 7));
    printf("%d\n", isEqual(5, 5));
}