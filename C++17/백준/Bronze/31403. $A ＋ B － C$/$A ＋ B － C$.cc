#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", a + b - c);

  char A[1000], B[1000];
  sprintf(A, "%d", a);
  sprintf(B, "%d", b);
  strcat(A, B);
  a = atoi(A);
  printf("%d\n", a - c);
  return 0;
}