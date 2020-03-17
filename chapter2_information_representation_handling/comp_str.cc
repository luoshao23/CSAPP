#include <cstdio>
#include <cstring>

int strlonger(char *s, char *t)
{
    // return strlen(s) - strlen(t) > 0;
    return strlen(s) > strlen(t);
}

int main()
{
    char s1[2147483648] = "sd";
    char s2[] = "";
    printf("%d\n", strlonger(s1, s2));
}
