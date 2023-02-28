// kth smaller and kth greater term in array
// code also apply for shorting array

#include <iostream>
using namespace std;
int main()
{
    int i, n, arr[100];
    // in q kth value is given
    int k = 3;

    cout << "Enter the size of array:" << endl;
    cin >> n;

    cout << "Enter the element :" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n - 1; i++)
    {

        int i = 0;
        int j = i + 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
                i++;
                j++;
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << "\n kth smallest" << arr[k - 1];
    cout << endl;
    cout << "\n kth larger" << arr[n - k];
    cout << endl;
    return 0;
}