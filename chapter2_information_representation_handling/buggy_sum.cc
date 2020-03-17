#include <cstdio>

float sum_elem(float a[], unsigned length)
{
    float result = 0;

    for (int i = 0; i <= length - 1; ++i)
    // for (int i = 0; i < length; ++i)
        result += a[i];

    return result;
}

int main()
{
    float a1[] = {4.3, 5, 2.2, 7.1};
    float a2[] = {};
    printf("%f\n", sum_elem(a1, 4));
    printf("%f\n", sum_elem(a2, 0));
}