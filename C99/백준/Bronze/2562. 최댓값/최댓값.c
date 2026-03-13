#include <stdio.h>

int main(){
  int x[100], y;
  int max = 0;
  for(int i = 0; i < 9; i++){
    scanf("%d", &x[i]);
  }
  for(int i = 0; i < 9; i++){
    if(max < x[i]){
      max = x[i];
      y = i + 1;
    }
  }
  printf("%d\n", max);
  printf("%d\n", y);
  return 0;
}