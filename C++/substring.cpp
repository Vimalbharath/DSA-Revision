#include <iostream>
#include <string>
#include <vector>

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

void substring2(string p, string up, vector<string> &result)
{
    if (up.empty())
    {
        // cout << p << "\n";
        result.push_back(p);
        cout << result.size();
        return;
    }

    substring2(p + up[0], up.substr(1), result);
    substring2(p, up.substr(1), result);
}

int main()
{
    // substring("", "abc");
    vector<string> result;
    substring2("", "abc", result);
    cout << result.size();
    for (const string s : result)
    {
        cout << s << " ";
    }
    // combination("", "abc");
    return 0;
}