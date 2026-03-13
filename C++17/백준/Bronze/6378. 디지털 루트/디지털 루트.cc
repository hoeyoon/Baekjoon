#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num(char n){
  int r = n - '0';
  return r;
}

int main(){
  char str[1001];
  //printf("%d\n", '2');
  while(1){
    scanf("%s", str);
    if(strcmp(str, "0") == 0){
      break;
    }
    int sum = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
      sum += num(str[i]);
    }
    while(sum >= 10){
      sum = sum / 10 + sum % 10;
    }
    printf("%d\n", sum);
  }
  return 0;
}