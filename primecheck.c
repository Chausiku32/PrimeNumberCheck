#include <stdio.h>

int n, j;
int main()
{
  scanf("%d", &n);
  int x, y, prime;
  for(x = 2; x <= n; x++)
  {
    prime = 1;
    for(y = 2; y < x; y++)
    {
      if(x % y == 0)
      {
        prime = 0;
        break;
      }
    }
    if(prime)
    {
      printf("%d ", x);
    }
  }

    return 0;
}
