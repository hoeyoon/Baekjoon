#include <stdio.h>

void reverse(char* x){
  while(*x != '\0'){
    if('A' <= *x && *x <= 'Z'){
      *x+=32; 
    }
    else{
      *x-=32;
    }
    x++;
  }
}

int main(){
  char x[100];
  scanf("%s", x);

  int i = 0;
  reverse(x);

  printf("%s\n", x);
  return 0;
}