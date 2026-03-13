#include <stdio.h>

int main(){
  char str[101];
  scanf("%s", str);
  char *p = str;
  int n = 0;
  while(*p != '\0'){
    if(*p == ','){
      n++;
    }
    p++;
  }
  printf("%d\n", n + 1);
  return 0;
}