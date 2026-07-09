#include <iostream>

using namespace std;

int recprod(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * recprod(n - 1);
}

int main()
{
    cout << "Vimal-";
    cout << recprod(5);
    return 0;
}
