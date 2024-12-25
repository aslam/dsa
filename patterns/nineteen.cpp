#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int spaces = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    for (int k = 0; k < spaces; k++)
    {
      cout << " ";
    }

    for (int l = 0; l < n - i; l++)
    {
      cout << "*";
    }

    spaces += 2;
    cout << endl;
  }

  int stars = 1;
  spaces = 2 * n - 2;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }
    for (int k = 0; k < spaces; k++)
    {
      cout << " ";
    }

    for (int l = 0; l < stars; l++)
    {
      cout << "*";
    }

    stars += 1;
    spaces -= 2;
    cout << endl;
  }
  return 0;
}
