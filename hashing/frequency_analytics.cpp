#include <iostream>

using namespace std;

// Most frequent and least frequent elements
void frequency(int arr[], int n)
{
  unordered_map<int, int> umap;
  for (int i = 0; i < n; i++)
  {
    umap[arr[i]]++;
  }

  int maxFrequency = 0, minFrequency = n;
  int maxElement = 0, minElement = 0;

  for (auto el : umap)
  {
    int element = el.first;
    int frequency = el.second;

    if (frequency > maxFrequency)
    {
      maxFrequency = frequency;
      maxElement = element;
    }
    if (frequency < minFrequency)
    {
      minFrequency = frequency;
      minElement = element;
    }
  }

  cout << "Max frequency element is: " << maxElement << " (" << maxFrequency << ")" << endl;
  cout << "Min frequency element is: " << minElement << " (" << minFrequency << ")" << endl;
}

int main()
{
  int arr[] = {10,
               5,
               10,
               15,
               10,
               5};

  int n = sizeof(arr) / sizeof(arr[0]);

  frequency(arr, n);

  return 0;
}
