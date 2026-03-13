#include <stdio.h>

int fac(int n){
  int sum = 1;
  for(int i = 1; i <= n; i++){
    sum *= i;
  }
  return sum;
}

int main(){
  int n, k;
  scanf("%d %d", &n, &k);

  int sum = fac(n) / (fac(n - k) * fac(k));
  printf("%d\n", sum);
  
  return 0;
}