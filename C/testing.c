#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 12345;
    printf("%d", n);
    int digit = (int)log10(abs(n)) + 1;
    printf("%d", digit);

    char a = 'a';
    printf("%c", a);
    return 0;
}