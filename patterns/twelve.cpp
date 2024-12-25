#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int spaces = 2 * (n - 1);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }

    for (int k = 1; k <= spaces; k++)
    {
      cout << " ";
    }

    for (int l = i; l >= 1; l--)
    {
      cout << l;
    }

    spaces -= 2;
    cout << endl;
  }
}
