#include <stdio.h>

void sort(int *n){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(n[i] > n[j]){
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }
}

int main(){
  int score[8];
  int score1[8];
  int sum = 0;
  for(int i = 0; i < 8; i++){
    scanf("%d", &score[i]);
    score1[i] = score[i];
  }
  sort(score1);
  for(int i = 0; i < 5; i++){
    sum += score1[i];
  }
  printf("%d\n", sum);
  int idx;
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 5; j++){
      if(score[i] == score1[j]){
        idx = i;
        printf("%d ", i + 1);
      }
    }
  }
  
  return 0;
}