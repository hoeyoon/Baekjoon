#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  int n[7];
  for(int i = 0; i < t; i++){
    for(int i = 0; i < 7; i++){
      scanf("%d", &n[i]);
    }
    int sum = 0;
    int min = 101;
    for(int i = 0; i < 7; i++){
      if(n[i] % 2 == 0){
        sum += n[i];
        if(n[i] < min){
          min = n[i];
        }
      }
    }
    printf("%d %d\n", sum, min);
  }
  return 0;
}