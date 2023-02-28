
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    cout << pM(a, pn(b, c, M - 1), M) << endl;
  }
}