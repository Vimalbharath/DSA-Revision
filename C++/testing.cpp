#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 12345;
    cout << n;
    int digits = floor(log10(n)) + 1;
    cout << digits;
    string a = "abcde";
    cout << a;
    return 0;
}