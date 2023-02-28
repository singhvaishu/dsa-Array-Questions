
//find second largest element in array

#include <iostream>
using namespace std;
int main()
{
    int i, n, arr[100];

    cout << "Enter the size of array:" << endl;
    cin >> n;
    cout << "Enter the element:" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else
        {
            if (arr[i] > max2 and arr[i] < max1)
            {
                max2 = arr[i];
            }
        }
    }
    cout << "second largest number is:" << max2 << endl;

    return 0;
}
