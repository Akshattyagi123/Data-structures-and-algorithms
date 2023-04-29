#include <iostream>
using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarysearch(int arr[], int s, int e, int key)
{
    print(arr, s, e);
    // base case
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    // if element found
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
    int size = 11;
    int key = 222;

    cout << "Present or not" << binarysearch(arr, 0, size - 1, key) << endl;
}