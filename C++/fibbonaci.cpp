#include <iostream>
using namespace std;

int fibbo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibbo(n - 1) + fibbo(n - 2);
}

int main()
{
    cout << "Vimal";
    cout << fibbo(7);
}