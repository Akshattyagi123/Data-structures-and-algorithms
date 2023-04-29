#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    cout << "size of array" << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linearSearch(int arr[], int size, int key)
{
    print(arr, size);
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingpart = linearSearch(arr + 1, size - 1, key);
        return remainingpart;
    }
}
int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 6;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }
}