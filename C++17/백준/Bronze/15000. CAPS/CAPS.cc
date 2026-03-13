#include <stdio.h>
#include <string.h>

int main(){
  char str[1000001];
  scanf("%s", str);
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    str[i] = str[i] - 'a' + 'A';
  }
  printf("%s\n", str);
  return 0;
}