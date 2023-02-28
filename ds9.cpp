// Replace array element by multiplication of privious and next

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

    int prev = 0;
    int curr = 0;
    void modify(int arr[]);
    {
        if (n <= 1)

            return 0;
        prev = arr[0];
        arr[0] = arr[0] * arr[1];
        for (i = 1; i < n - 1; i++)
        {
            (curr = arr[i]);

            arr[i] = prev * arr[i + 1];
            (prev = curr);
        }

        arr[n - 1] = prev * arr[n - 1];
    }

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}