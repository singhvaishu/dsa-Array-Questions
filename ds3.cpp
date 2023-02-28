

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
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}