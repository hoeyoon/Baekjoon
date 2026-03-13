#include <stdio.h>

int main() {
  long long x, y;
  scanf("%lld %lld", &x, &y);

  long long p = x + y;
  long long m = x - y;

  printf("%lld\n", p*m);
  return 0;
}