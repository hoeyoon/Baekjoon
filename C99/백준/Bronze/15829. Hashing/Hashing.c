#include <stdio.h>
#define M 1234567891

int main(){
  int n;
  char a[100];
  scanf("%d", &n);
  scanf("%s", a);
  
  long long sum = 0, r = 1;
  for(int i = 0; i < n; i++){
    sum = (sum + (a[i] - 96) * r) % M;
    r = (r * 31) % M;
  }
  printf("%lld\n", sum);
  return 0;
}