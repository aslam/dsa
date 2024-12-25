#include <iostream>

using namespace std;

int bruteforce(int n1, int n2)
{
  int gcd = 1;

  for (int i = 1; i <= min(n1, n2); i++)
  {
    if (n1 % i == 0 && n2 % i == 0)
    {
      gcd = i;
    }
  }

  return gcd;
}

// Euclidean Algorithm
int optimal(int n1, int n2)
{
  while (n1 > 0 && n2 > 0)
  {
    if (n1 > n2)
    {
      n1 = n1 % n2;
    }
    else
    {
      n2 = n2 % n1;
    }
  }

  if (n1 == 0)
    return n2;
  return n1;
}

int main()
{
  int n1, n2;
  cin >> n1;
  cin >> n2;

  cout << "GCD of " << n1 << " and " << n2 << " is (bruteforce): " << bruteforce(n1, n2) << endl;

  cout << "GCD of " << n1 << " and " << n2 << " is (Euclidean): " << optimal(n1, n2) << endl;

  return 0;
}
