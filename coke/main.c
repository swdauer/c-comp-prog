#include <stdio.h>

int minInsertions(int c, int n1, int n5, int n10)
{
  if (n10 > 0)
  {
    return minInsertions(c - n10, n1 + 2 * n10, n5, 0) + n10;
  }
}

int main()
{
  int n;
  scanf(" %d", &n);
  int i;
  for (i = 0; i < n; i++)
  {
    int c, n1, n5, n10;
    scanf(" %d %d %d %d", &c, &n1, &n5, &n10);
    printf("%d\n", minInsertions(c, n1, n5, n10));
  }
  return 0;
}
