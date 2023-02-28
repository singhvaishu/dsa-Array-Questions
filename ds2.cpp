#include <iostream>
using namespace std;
int main()
{
    int i, n, arr[100], max, min;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    cout << "Enter the element:" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    cout << "largest element:" << max;
    cout << "smallest element:" << min;

    return 0;
}