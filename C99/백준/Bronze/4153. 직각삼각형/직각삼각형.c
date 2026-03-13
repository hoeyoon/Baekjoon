#include <stdio.h>

int triangle(int a, int b, int c){
  if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int a, b, c;
  while(1){
    scanf("%d %d %d", &a, &b, &c);
    if(a == 0 && b == 0 && c == 0){
      break;
    }
    if(triangle(a, b, c) == 1){
      printf("right\n");
    }
    else{
      printf("wrong\n");
    }
  }
  return 0;
}