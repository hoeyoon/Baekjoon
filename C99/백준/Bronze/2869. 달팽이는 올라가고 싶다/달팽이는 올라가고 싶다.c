#include <stdio.h>

int main(){
  int a, b, v;
  scanf("%d %d %d", &a, &b, &v);

  int d = (v - b - 1) / (a - b) + 1;
  printf("%d\n" ,d);
  return 0;
}