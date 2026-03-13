#include <stdio.h>

int main(){
  int A, B, C;
  int num[10] = {0, };
  int sum;
  int a;
  scanf("%d %d %d", &A, &B, &C);

  sum = A*B*C;
  while(sum > 0){
    a = sum % 10;
    num[a]++;
    sum /= 10;
  }
  for(int i = 0; i < 10; i++){
    printf("%d\n", num[i]);
  }
  return 0;
}