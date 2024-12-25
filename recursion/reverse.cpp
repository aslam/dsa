#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseArray(int arr[], int n)
{
  int ans[n];
  for (int i = n - 1; i >= 0; i--)
  {
    ans[n - 1 - i] = arr[i];
  }

  printArray(ans, n);
}
int main()
{
  int n = 5;
  int arr[] = {5, 4, 3, 2, 1};

  reverseArray(arr, n);
  return 0;
}
