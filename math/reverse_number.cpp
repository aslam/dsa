#include <iostream>
#include <vector>

using namespace std;

vector<int> extract_digits(int n)
{
  vector<int> v;
  while (n > 0)
  {
    v.push_back(n % 10);
    n = n / 10;
  }

  return v;
}

int main()
{
  int n;
  cin >> n;

  vector<int> digits = extract_digits(n);

  int reverse = 0;
  for (int i : digits)
  {
    reverse = reverse * 10 + i;
  }

  cout << "Reverse of " << n << " is " << reverse << endl;

  return 0;
}
