#include <stdio.h>

int binarysearch(int arr[], int s, int e, int target)
{
    if (s > e)
    {
        return 0;
    }
    int m = s + (e - s) / 2;
    if (arr[m] == target)
    {
        return 1;
    }
    if (arr[m] > target)
    {
        return binarysearch(arr, s, m - 1, target);
    }
    else
    {
        return binarysearch(arr, m + 1, e, target);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d", i);
    }

    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d=%d/%d", size, sizeof(arr), sizeof(arr[0]));
    int ans = binarysearch(arr, 0, size - 1, target);
    printf("%d", ans);
}
