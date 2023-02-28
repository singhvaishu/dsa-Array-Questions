#include <iostream>
using namespace std;
int main()
{
    int i, num, arr[100];

    cout << "Enter the size of the array:" << endl;
    cin >> num;

    cout << "Enter the element value:" << endl;
    for (i = 0; i < num; i++)
        cin >> arr[i];

    for (i = 1; i <= num; i++)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout << endl
         << "Largest element =" << arr[0];
    return 0;
}