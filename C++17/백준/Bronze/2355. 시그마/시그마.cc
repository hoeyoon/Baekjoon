#include <stdio.h>

void swap(long long *a, long long *b){
  long long temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  long long a, b;
  scanf("%lld %lld", &a, &b);
  if(a > b){
    swap(&a, &b);
  }
  printf("%lld\n", (a + b) * (b - a + 1) / 2);
  return 0;
}