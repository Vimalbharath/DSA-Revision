#include <stdio.h>
#include <string.h>

void substring(int l, char p[], char up[])
{
    if (strlen(up) == 0)

    {
        p[l] = '\0';
        printf("%s\n", p);
        return;
    }
    l = strlen(p);
    p[l] = up[0];
    substring(l + 1, p, up + 1);
    p[l] = '\0';
    substring(l, p, up + 1);
}

int main()
{
    char a[] = "abc";
    char b[10] = "";
    substring(0, b, a);
    return 0;
}