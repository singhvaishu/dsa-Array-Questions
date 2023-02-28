
#include <iostream>
using namespace std;
int main()
{
    int i, n, max1, max2, max3, arr[100];

    cout << "Enter the size of array:" << endl;
    cin >> n;
    cout << "Enter the element:" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max1 = max2 = max3 = arr[0];

    for (i = 0; i < n; i++)
        if (max1 < arr[i])
        {
            max1 = max2;
            max1 = max3;
            max1 = arr[i];
        }
        else if (max2 < arr[i])
        {
            max2 = max3;
            max2 = arr[i];
        }
        else if (max3 < arr[i])
        {
            max3 = arr[i];
        }
    cout << "first largest number is:" << max1 << endl;
    cout << "second largest number is:" << max2 << endl;
    cout << "third largest number is:" << max3 << endl;
    return 0;
}