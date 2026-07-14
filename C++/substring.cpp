#include <iostream>
#include <string>

using namespace std;

void substring(string p, string up)
{
    if (up.empty())
    {
        cout << p << "\n";
        return;
    }

    substring(p + up[0], up.substr(1));
    substring(p, up.substr(1));
}

void combination(string p, string up)
{
    if (up.empty())
    {
        cout << p << "\n";
        return;
    }

    int l = p.size();
    char ch = up[0];
    for (int i = 0; i <= l; i++)
    {
        combination(p.substr(0, i) + ch + p.substr(i), up.substr(1));
    }
}
int main()
{
    substring("", "abc");
    combination("", "abc");
    return 0;
}