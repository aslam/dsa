#include <iostream>

using namespace std;

void solution1(int n)
{
  for (int i = 0; i < n; i++)
  {
    int start = 65;
    for (int j = 0; j < i; j++)
    {
      cout << char(start) << " ";
      start += 1;
    }
    cout << endl;
  }
}

void solution2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
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
