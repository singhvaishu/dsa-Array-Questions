// to find next greater element of every element of given array integers
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
    int next;
    // int i = 0;
    int j = i + 1;
    for (i = 0; i < n; i++)
    {

        for (i = j + 1; j < n; j++)
        {
            if (arr[j] <= arr[i])
            {
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
        }
    }
    for (i = 0; i < n - 2; i++)
        cout << arr[i] << endl;
    return 0;
}