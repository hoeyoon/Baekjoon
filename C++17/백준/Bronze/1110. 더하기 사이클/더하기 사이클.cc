#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d", &n);
  int a, b;
  int count = 0;
  int res = n;
  while(1){
    a = res / 10;
    b = res - (a * 10);
    int sum = a + b;
    if(sum < 10){
      res = b * 10 + sum;
    }
    else{
      res = b * 10 + (sum - 10);
    }
    count++;
    if(res == n){
      break;
    }
  }
  printf("%d\n", count);
  return 0;
}