#include <iostream>

using namespace std;

vector<int> getDivisors(int n)
{
  vector<int> divisors;
  int sqrtN = sqrt(n);
  for (int i = 1; i <= sqrtN; i++)
  {
    if (n % i == 0)
    {
      divisors.push_back(i);

      // Add the counterpart divisor
      // if different from i
      if (i != n / i)
        divisors.push_back(n / i);
    }
  }

  return divisors;
}

int main()
{
  int n;
  cin >> n;

  vector<int> divisors = getDivisors(n);

  sort(divisors.begin(), divisors.end());
  for (int i : divisors)
    cout
        << i << " ";

  cout << endl;
  return 0;
}
