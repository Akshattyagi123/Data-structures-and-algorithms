#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }
    // eek case hame solve karna hota hai
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingpart = isSorted(arr + 1, size - 1);
        return remainingpart;
    }
}

int main()
{
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}