#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    cout << "printing the array" << endl;
    // print the array

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "printing Done" << endl;
}

int main()
{
    int number[15];
    // accessing an  array
    cout << "Value at 15 index" << number[14] << endl;

    // cout<<"Value at 20 index"<<number[19]<<endl;

    int second[3] = {5, 7, 11};

    cout << "Value at 2nd index" << second[2] << endl;

    int third[15] = {2, 7};
    cout << "printing the array" << endl;

    printArray(third, 15);
    // finding length of array
    int thirdSize = sizeof(third) / sizeof(int);

    cout << "length of this array is" << thirdSize << endl;

    int fourth[10] = {0};
    cout << "printing the array" << endl;

    printArray(fourth, 10);

    // initialising all locations with 1[not poosible with below line]
    int fifth[10] = {1};
    cout << "printing the array" << endl;
    printArray(fifth, 10);
    // finding length of array
    int fifthSize = sizeof(fifth) / sizeof(int);

    cout << "Size of this array is" << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;

    cout << "printing the array" << endl;

    // printing the array
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << endl;
    }
    cout << "printing Done" << endl;
    double firstDouble[5];
    float firstfloat[6];
    bool firstBool[9];

    cout << endl
         << "Everything is fine" << endl;

    return 0;
}
