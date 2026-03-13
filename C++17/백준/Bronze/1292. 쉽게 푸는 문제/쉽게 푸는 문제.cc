#include <stdio.h>

int main(){
  int c = 0;
  int a, b;
  int num[1001] = {0, };
  scanf("%d %d", &a, &b);
  for(int i = 0; i <= 1000; i++){
    for(int j = 0; j < i; j++){
      if(c == 1000){
        break;
      }
      num[c] = i;
      c++;
    }
  }
  int sum = 0;
  for(int i = a - 1; i < b; i++){
    sum += num[i];
  }
  printf("%d\n", sum);
  return 0;
}