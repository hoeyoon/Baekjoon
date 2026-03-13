#include <stdio.h>

int main(){
  int s[2][4];

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 4; j++){
      scanf("%d", &s[i][j]);
    }
  }
  int sum1 = 0, sum2 = 0;
  for(int i = 0; i < 4; i++){
    sum1 += s[0][i];
    sum2 += s[1][i];
  }
  //printf("%d %d\n", sum1, sum2);
  int result;
  if(sum1 == sum2){
    result = sum1;
  }
  else if(sum1 > sum2){
    result = sum1;
  }
  else{
    result = sum2;
  }
  printf("%d\n", result);
  return 0;
}