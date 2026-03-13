#include <stdio.h>

void print(int r, char *s){
  while(*s != '\0'){
    for(int i = 0; i < r; i++){
      printf("%c", *s);
    }
    s++;
  }
  printf("\n");
}

int main(){
  int t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    int r;
    char str[21];
    scanf("%d %s", &r, str);
    print(r, str);
  }
  return 0;
}