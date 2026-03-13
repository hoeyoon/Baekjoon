#include <stdio.h>

int main(){
  int a[100], x, sum = 0;
  scanf("%d", &x);
  for(int i = 0; i < x; i++){
    scanf("%1d", &a[i]);
    sum+=a[i];
  }
  printf("%d\n", sum);
  return 0;
}