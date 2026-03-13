#include <stdio.h>
#include <string.h>

int main(){
  char str[5][11];
  int count = 0;
  for(int i = 0; i < 5; i++){
    scanf("%s", str[i]);
  }
  for(int i = 0; i < 5; i++){
    if(strstr(str[i], "FBI")){
      printf("%d ", i + 1);
      count++;
    }
  }
  if(count == 0){
    printf("HE GOT AWAY!\n");
  }
  return 0;
}