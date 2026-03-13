#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rev_num(char *s){
  int len = strlen(s);
  for(int i = 0; i < len / 2; i++){
    int temp = s[i];
    s[i] = s[len - 1 - i];
    s[len - 1 - i] = temp;
  }
}

int main(){
  char x[5], y[5];
  scanf("%s %s", x, y);
  rev_num(x);
  rev_num(y);
  //printf("%s %s", x, y);
  int x_int = atoi(x);
  int y_int = atoi(y);
  int sum_int = x_int + y_int;
  char sum[5];
  sprintf(sum, "%d", sum_int);
  rev_num(sum);
  sum_int = atoi(sum);
  printf("%d\n", sum_int);
  return 0;
}