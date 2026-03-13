#include <stdio.h>

int main(){
  int n;
  int a = 0, b = 1;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int temp = a + b;
    a = b;
    b = temp;
  }
  printf("%d\n", a);
  return 0;
}