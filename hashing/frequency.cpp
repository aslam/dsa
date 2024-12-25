#include <iostream>

using namespace std;

void countFrequency(int arr[], int size)
{
  unordered_map<int, int> count_map;

  for (int i = 0; i < size; i++)
  {
    count_map[arr[i]]++;
  }

  // for (auto i : count_map)
  // {
  //   cout << i.first << " -> " << i.second << endl;
  // }

  unordered_map<int, int>::iterator p;
  for (p = count_map.begin(); p != count_map.end(); p++)
  {
    cout << p->first << " -> " << p->second << endl;
  }
}

void frequency(int arr[], int n)
{
  vector<bool> visited(n, false);

  for (int i = 0; i < n; i++)
  {
    if (visited[i] == true)
      continue;

    int count = 1;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        visited[j] = true;
        count++;
      }
    }

    cout << arr[i] << " " << count << endl;
  }
}

int main()
{
  int input[] = {10, 5, 10, 15, 10, 5};
  int n = sizeof(input) / sizeof(input[0]);
  countFrequency(input, n);

  frequency(input, n);

  return 0;
}
