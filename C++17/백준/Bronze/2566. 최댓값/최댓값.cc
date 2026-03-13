#include <stdio.h>

int main(){
  int n[9][9];
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      scanf("%d", &n[i][j]);
    }
  }
  int max = 0;
  int idx_i, idx_j;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      if(max <= n[i][j]){
        max = n[i][j];
        idx_i = i + 1;
        idx_j = j + 1;
      }
    }
  }
  printf("%d\n", max);
  printf("%d %d\n", idx_i, idx_j);
  return 0;
}