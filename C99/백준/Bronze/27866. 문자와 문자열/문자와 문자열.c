#include <stdio.h>

int main(){
  char s[1000];
  int x;
  
  scanf("%s", s);
  scanf("%d", &x);

  printf("%c\n", s[x-1]);
  return 0;
}