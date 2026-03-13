#include <stdio.h>

void check_zero(int n, int *c){
  if(n == 0){
    (*c)++;
  }
  while(n > 0){
    if(n % 10 == 0){
      (*c)++;
    }
    n /= 10;
  }
}

int main(){
  int t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    int n, m;
    int count = 0;
    scanf("%d %d", &n, &m);
    for(int j = n; j <= m; j++){
      check_zero(j, &count);
    }
    printf("%d\n", count);
  }
  return 0;
}