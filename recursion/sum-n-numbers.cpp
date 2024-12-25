#include <iostream>

using namespace std;

int func_og(int sum, int i, int n)
{
  if (i > n)
    return sum;

  sum += i;
  return func_og(sum, ++i, n);
}

int main()
{
  int n;
  cin >> n;

  cout << "Sum of first " << n << " numbers is: " << func_og(0, 1, n) << endl;

  return 0;
}
