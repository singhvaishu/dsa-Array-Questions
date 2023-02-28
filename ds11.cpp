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
    // int i = 0;
    int j = n - 1;
    while (j >= i)
    {
        if (arr[i] % 2 == 0 && arr[i] < arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else
        {
            if (arr[i] % 2 == 1)
            {
                j--;
            }
        }
        //  else
        {
            if (arr[i] % 2 == 0)
            {
                i++;
            }
        }
    }

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}