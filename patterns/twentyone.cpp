#include <iostream>

using namespace std;

void solution1(int n)
{
  int spaces = 0;
  int stars = n / 2;

  for (int i = 0; i < n; i++)
  {
    if (i > 0 && i < n - 1)
    {
      stars = 1;
      spaces = n - 2;
    }
    else
    {
      stars = n / 2;
      spaces = 0;
    }

    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < spaces; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void solution2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }

    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  solution2(n);

  return 0;
}
