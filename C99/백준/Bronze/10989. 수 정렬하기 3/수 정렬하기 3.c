#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int num;
  int c[10001] = {0, };
  for(int i = 0; i < n; i++){
    scanf("%d", &num);
    c[num] = c[num] + 1;
  }
  for(int i = 0; i < 10001; i++){
    for(int j = 0; j < c[i]; j++){
      printf("%d\n", i);
    }
  }
  return 0;
}