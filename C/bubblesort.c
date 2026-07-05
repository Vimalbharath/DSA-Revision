#include <stdio.h>

int main()
{
    printf("Hello");
    int arr[4] = {3, 4, 5, 6};
    int count = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}