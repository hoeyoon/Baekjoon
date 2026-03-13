#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int a = 3, b = 2;
  for(int i = 1; i < n; i++){
    a += b;
    b *= 2;
  }
  printf("%d\n", a * a);
  return 0;
}