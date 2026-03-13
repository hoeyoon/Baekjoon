#include <stdio.h>

int main(){
  int num[5];
  int sum = 0;
  for(int i = 0; i < 5; i++){
    scanf("%d", &num[i]);
    sum += num[i];
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(num[i] < num[j]){
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
    }
  }
  printf("%d\n%d\n", sum / 5, num[5 / 2]);
  return 0;
}