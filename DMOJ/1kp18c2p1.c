#include <stdio.h>

#define MAX_LINES 100

int shortest_line_index(int lines[], int n)
{
  int shortest = 0;
  for (int i = 1; i < n; i++)
  {
    if (lines[i] < lines[shortest])
    {
      shortest = i;
    }
  }
  return shortest;
}

void solve(int lines[], int n, int m)
{
  for (int i = 0; i < m; i++)
  {
    int shortest = shortest_line_index(lines, n);
    printf("%d\n", lines[shortest]);
    lines[shortest]++;
  }
}

int main()
{
  int lines[MAX_LINES];
  int n, m, i;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &lines[i]);
  }
  solve(lines, n, m);

  return 0;
}
