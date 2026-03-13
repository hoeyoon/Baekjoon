#include <stdio.h>

int main(){
  int num[1000000];
  int x;
  scanf("%d", &x);
  for(int i = 0; i < x; i++){
    scanf("%d", &num[i]);
  }
  int max = num[0];
  for(int i = 0; i < x; i++){
    if(max < num[i]){
      max = num[i];
    }
  }
  int min = max;
  for(int i = 0; i < x; i++){
    if(min > num[i]){
      min = num[i];
    }
  }
  printf("%d %d\n", min, max);
  return 0;
}