#include <iostream>

using namespace std;

void func(int i)
{
  if (i < 1)
    return;

  cout << i << " ";
  func(--i);
}

int main()
{
  int n;
  cin >> n;

  func(n);
  cout << endl;

  return 0;
}
