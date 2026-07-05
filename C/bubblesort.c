#include <stdio.h>

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubblesort(int arr[], int size)
{
    // int count = sizeof(arr) / sizeof(arr[0]);
    // printf("%d%d%d", count, sizeof(arr), sizeof(arr[0]));
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 1; j < size - i; j++)
        {
            // printf("%d", j);
            if (arr[j - 1] > arr[j])
            {
                swap(arr, j, j - 1);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
        // printf("----\n");
    }
}

int main()
{
    printf("Hello");
    int arr[7] = {3, 4, 5, 6, 0, 9, 8};
    int count = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, count);
    // printf("Im main: %d%d%d end", count, sizeof(arr), sizeof(arr[0]));
    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}