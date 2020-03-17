#include <cstdio>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first < last; ++first, --last)
        inplace_swap(&a[first], &a[last]);
}

void print_array(int array[], int cnt)
{
    for (size_t i = 0; i < cnt; ++i)
        printf("%d,", array[i]);
    printf("\n");
}

int main()
{
    int a = 3, b = 4;
    printf("%d %d\n", a, b);
    inplace_swap(&a, &b);
    printf("%d %d\n", a, b);

    int array[] = {1, 4, 2, 3, 8, 5, 7};
    print_array(array, 7);


    reverse_array(array, 7);
    print_array(array, 7);

}