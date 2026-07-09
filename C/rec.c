#include <stdio.h>

int recsum(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n + recsum(n - 1);
}

int main()
{
    printf("Hello");
    printf("%d", recsum(5));
    return 0;
}
