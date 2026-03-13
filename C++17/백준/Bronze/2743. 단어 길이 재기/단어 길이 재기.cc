#include <stdio.h>

int main() {
  char x[101];
  int count = 0;
  scanf("%s", &x);

  for(int i = 0; x[i] != 0; i++){
    count++;
  }
  printf("%d", count);
  return 0;
}