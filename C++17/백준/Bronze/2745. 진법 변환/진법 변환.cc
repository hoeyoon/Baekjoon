#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
  char n[101];
  int b;
  scanf("%s %d", n, &b);
  int a;
  int len = strlen(n);
  int r = 0;
  for(int i = 0; i < len; i++){
    if('0' <= n[i] && n[i] <= '9'){
      a = n[i] - '0';
    }
    else if('A' <= n[i] && n[i] <= 'Z'){
      a = n[i] - 'A' + 10;
    }
    r += a * pow(b, len - 1 - i);
  }
  printf("%d\n", r);
  return 0;
}