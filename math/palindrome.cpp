#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int copy = n;
  int reverse = 0;

  while (copy > 0)
  {
    reverse = reverse * 10 + (copy % 10);
    copy = copy / 10;
  }

  if (n == reverse)
  {
    cout << "The given number is a palindrome." << endl;
  }
  else
  {
    cout << "The given number is not a palindrome." << endl;
  }

  return 0;
}
