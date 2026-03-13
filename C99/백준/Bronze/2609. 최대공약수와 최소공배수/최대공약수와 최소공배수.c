#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  int min, max;
  int c[100];
  for(int i = 1; i <= a && i <= b; i++){
    if(a % i == 0 && b % i == 0){
      max = i;
    }
  }
  printf("%d\n", max);

  printf("%d\n", (a * b) / max);
  return 0;
}