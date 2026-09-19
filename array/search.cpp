// WAP to search an element in an array using linear search.

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // find the size of the array
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    int searchElement;
    int found = 0;

    cout << "Enter the element to search: ";
    cin >> searchElement;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == searchElement)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        cout << "Element found in the array." << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
}