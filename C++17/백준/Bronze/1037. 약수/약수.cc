#include <stdio.h>

int main(){
  int t;
  long long max = 0, min = 1000001;
  scanf("%d", &t);
  int n;
  for(int i = 0; i < t; i++){
    scanf("%d", &n);
    if(n > max){
      max = n;
    }
    if(n < min){
      min = n;
    }
  }
  printf("%lld\n", max * min);
  
  return 0;
}