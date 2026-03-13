#include <stdio.h>
#include <string.h>

int main(){
  char str[2][1000];
  for(int i = 0; i < 2; i++){
    scanf("%s", str[i]);
  }
  
  if(strlen(str[0]) < strlen(str[1])){
    printf("no\n");
  }
  else{
    printf("go\n");
  }
  return 0;
}