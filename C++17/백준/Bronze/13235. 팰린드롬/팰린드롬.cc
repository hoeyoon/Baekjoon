#include <stdio.h>
#include <string.h>

int main(){
  char str[21];
  scanf("%s", str);
  int len = strlen(str);
  int count = 0;
  for(int i = 0; i < len / 2; i++){
    if(str[i] == str[len - i - 1]){
      count++;
    }
  }
  if(count == len / 2){
    printf("true\n");
  }
  else{
    printf("false\n");
  }
  return 0;
}