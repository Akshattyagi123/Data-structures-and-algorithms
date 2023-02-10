// Find maximum and minimum element from given array
#include <iostream>
#include <climits>
using namespace std;

int get_min(int arr[], int n)
{
    int mini = INT_MAX;
    ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int get_max(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{

    int arr[6] = {1, 5, 8, 9, 7, 6};
    int minimum = get_min(arr, 6);
    int maximum = get_max(arr, 6);

    cout << "Minimum element is" << minimum << endl;
    cout << "Maximum element is" << maximum << endl;
}