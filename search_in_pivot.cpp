#include <iostream>
using namespace std;

int binary_search(int arr[], int num, int first, int last)
{
    int l = first;
    int r = last - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (num < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int find_pivot(int arr[], int size)
{
    int l = 0;
    int r = size - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= arr[0])
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
        mid = l + (r - l) / 2;
    }
    return l;
}
int main()
{
    int arr[500], i, size, num, l = 0, index, r = size - 1;
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number you want to search in the array\n";
    cin >> num;
    int pivot = find_pivot(arr, size);
    if (num >= arr[pivot] && num <= arr[r])
    {
        index = binary_search(arr, num, pivot, size);
    }
    else
    {
        index = binary_search(arr, num, 0, pivot);
    }
    cout << num << " found at index " << index;

    return 0;
}