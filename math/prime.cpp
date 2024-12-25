#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int count = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
      count += 2;
  }

  cout << "Total divisors: " << count << endl;
  cout << "The number " << n;
  if (count == 2)
    cout << " is prime!";
  else
    cout << " is not prime!";
  cout << endl;

  return 0;
}
