#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int cpy = n;
  int sum = 0;

  while (n > 0)
  {
    sum += pow(n % 10, 3);
    n = n / 10;
  }

  if (cpy == sum)
    cout << "true";
  else
    cout << "false";

  return 0;
}
