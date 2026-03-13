#include <stdio.h>

int main(){
  int chess[6];
  int chess_count[6] = {1, 1, 2, 2, 2, 8};
  for(int i = 0; i < 6; i++){
    scanf("%d", &chess[i]);
  }
  for(int i = 0; i < 6; i++){
    chess[i] = chess_count[i] - chess[i];
  }
  for(int i = 0; i < 6; i++){
    printf("%d ", chess[i]);
  }
  return 0;
}