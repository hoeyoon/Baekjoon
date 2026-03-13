#include <stdio.h>

int main(){
  int num[3];
  for(int i = 0; i < 3; i++){
    scanf("%d", &num[i]);
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(num[i] < num[j]){
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
    }
  }
  for(int i = 0; i < 3; i++){
    printf("%d ", num[i]);
  }
  return 0;
}