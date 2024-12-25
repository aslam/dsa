#include <iostream>

using namespace std;

void solution1(int n)
{
  bool start = true;
  for (int i = 0; i < n; i++)
  {
    bool on = start;
    for (int j = 0; j <= i; j++)
    {
      if (on == true)
      {
        cout << 1;
      }
      else
      {
        cout << 0;
      }

      on = !on;
    }
    start = !start;
    cout << endl;
  }
}

void solution2(int n)
{
  int start = 1;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;

    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
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
