#include <iostream>

int main()
{
    std::cout << "Hello" << "\n";
    int arr[4] = {3, 4, 5, 6};
    int count = std::size(arr);
    for (int i = 0; i < count; i++)
    {
        std::cout << (arr[i]) << "\n";
    }
    return 0;
}