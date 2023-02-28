// find most repting element in array
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

    int count = 0;
    // int i = 0;
    int j = i + 1;
    cout << "Repting element are:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[j] << " ";
            }
        }
    }
    return 0;
}
