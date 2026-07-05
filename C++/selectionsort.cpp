#include <iostream>
#include <vector>

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int max(int arr[], int a, int b)
{
    int max = a;
    for (int i = 0; i <= b; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    return max;
}

void selection(int arr[], int size)
{
    // std::cout << size;
    for (int i = 0; i < size; i++)
    {
        int lasti = size - 1 - i;
        int maxi = max(arr, 0, lasti);
        swap(arr, maxi, lasti);
    }
}

int main()
{
    std::cout << "Hello" << "\n";
    int arr[7] = {3, 4, 5, 6, 0, 9, 8};
    std::vector<int> arr1 = {1, 2, 3, 4};
    int count = std::size(arr);
    selection(arr, count);
    for (int i = 0; i < count; i++)
    {
        std::cout << (arr[i]) << "\n";
    }
    return 0;
}