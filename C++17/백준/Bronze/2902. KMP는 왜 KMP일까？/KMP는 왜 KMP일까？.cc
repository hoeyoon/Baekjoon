#include <stdio.h>

int main(){
  char str[101];
  scanf("%s", str);
  getchar();
  printf("%c", str[0]);
  char *p = str;
  while(*p != '\0'){
    if(*p == '-'){
      printf("%c", *(p + 1));
    }
    p++;
  }
  return 0;
}