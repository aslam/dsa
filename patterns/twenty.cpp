#include <iostream>

using namespace std;

void solution1(int n)
{
  int stars = 1;
  int spaces = 2 * n - 2;

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

  stars = n - 1;
  spaces = 2;
  for (int i = 0; i < n - 1; i++)
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

    stars -= 1;
    spaces += 2;
    cout << endl;
  }
}

void solution2(int n)
{
  int spaces = 2 * n - 2;

  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;

    if (i > n)
      stars = 2 * n - i;

    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    for (int j = 1; j <= spaces; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }

    if (i < n)
      spaces -= 2;
    else
      spaces += 2;
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
