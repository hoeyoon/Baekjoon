#include <stdio.h>

int main(){
  int x, y, z;
  scanf("%d", &x);

  for(int i = 1; i <= x; i++){
    scanf("%d %d", &y, &z);
    printf("Case #%d: %d\n", i, y+z);
  }
  return 0;
}