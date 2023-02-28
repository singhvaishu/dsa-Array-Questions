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
    int j = i + 1;
    int counts;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
                i++;
                j--;
            }
            if (arr[i] = arr[j])
            {
                cout << counts << arr[i] << " ";
            }
        }
    }
    return 0;
}