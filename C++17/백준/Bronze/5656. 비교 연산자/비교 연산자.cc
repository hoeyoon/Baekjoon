#include <stdio.h>
#include <string.h>

int main(){
  int a, b;
  char c[10];
  int i = 1;
  while(1){
    char e[10];
    scanf("%d %s %d", &a, c, &b);
    if(c[0] == 'E'){
      break;
    }
    if(c[0] == '>'){
      if(c[1] == '='){
        if(a >= b){
          strcpy(e, "true");
        }
        else{
          strcpy(e, "false");
        }
      }
      else{
        if(a > b){
          strcpy(e, "true");
        }
        else{
          strcpy(e, "false");
        }
      }
    }
    if(c[0] == '<'){
      if(c[1] == '='){
        if(a <= b){
          strcpy(e, "true");
        }
        else{
          strcpy(e, "false");
        }
      }
      else{
        if(a < b){
          strcpy(e, "true");
        }
        else{
          strcpy(e, "false");
        }
      }
    }
    if(c[0] == '=' && c[1] == '='){
      if(a == b){
        strcpy(e, "true");
      }
      else{
        strcpy(e, "false");
      }
    }
    if(c[0] == '!' && c[1] == '='){
      if(a != b){
        strcpy(e, "true");
      }
      else{
        strcpy(e, "false");
      }
    }
    printf("Case %d: %s\n", i, e);
    i++;
  }
  return 0;
}