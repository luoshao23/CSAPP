#include <cstdio>

int fun1(unsigned word)
{
    return (int)((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int) word << 24) >> 24;
}

int main()
{
    // fun1 76, fun2 76
    // fun1 21, fun2 21
    // fun1 c9, fun2 ffffffc9
    // fun1 87, fun2 ffffff87
    printf("fun1 %x, fun2 %x\n", fun1(0x76), fun2(0x76));
    printf("fun1 %x, fun2 %x\n", fun1(0x87654321), fun2(0x87654321));
    printf("fun1 %x, fun2 %x\n", fun1(0xc9), fun2(0xc9));
    printf("fun1 %x, fun2 %x\n", fun1(0xedcba987), fun2(0xedcba987));
}
