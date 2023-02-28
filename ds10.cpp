// finding odd and even in array
#include <iostream>
using namespace std;
int main()
{
    int i, n, arr[100], even, odd;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    cout << "Enter the element:" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\n even elements:" << endl;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n odd elements:" << endl;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}