#include <iostream>

using namespace std;

void func(int i, int n)
{
  if (i > n)
    return;

  cout << "Aslam" << endl;

  func(++i, n);
}

int main()
{
  int n;
  cin >> n;

  func(1, n);

  return 0;
}
