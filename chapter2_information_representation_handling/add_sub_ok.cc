#include <cstdio>
#include <climits>
#include <cassert>

int tadd_ok(int x, int y);
int tsub_ok(int x, int y);

int main()
{
    assert(tadd_ok(0, INT_MAX) == 1);
    assert(tadd_ok(1, INT_MAX) == 0);
    assert(tadd_ok(0, INT_MIN) == 1);
    assert(tadd_ok(-1, INT_MIN) == 0);

    assert(tsub_ok(0, INT_MIN) == 0);
    assert(tsub_ok(-1, INT_MIN) == 0);
    assert(tsub_ok(0, INT_MAX) == 1);
    assert(tsub_ok(-1, INT_MAX) == 1);
    assert(tsub_ok(-2, INT_MAX) == 0);
    assert(tsub_ok(INT_MIN, 0) == 1);
    assert(tsub_ok(INT_MIN, 1) == 0);

    return 0;
}
int tadd_ok(int x, int y)
{

    int sum = x + y;
    int positive_overflow = x > 0 && y > 0 && sum < 0;
    int negative_overflow = x < 0 && y < 0 && sum > 0;
    // printf("x: %d %x, y: %d %x, sum: %d %x\n", x, x, y, y, sum, sum);
    return !positive_overflow && !negative_overflow;
}

int tsub_ok(int x, int y)
{
    if (y == INT_MIN)
        return 0;
    int diff = x - y;
    int negative_overflow = x < 0 && y > 0 && diff > 0;
    int positive_overflow = x > 0 && y < 0 && diff < 0;
    return !negative_overflow && !positive_overflow;
}
