#include <stdio.h>
#include <string.h>

int main(){
  char str[21];
  scanf("%s", str);
  int len = strlen(str);
  for(int i = 0; i < len / 2; i++){
    int temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
  printf("%s\n", str);
  return 0;
}