#include <stdio.h>
#include <string.h>

int main(){
  char str[256];
  while(1){
    scanf("%[^\n]s", str);
    getchar();
    if(strcmp(str, "***") == 0){
      break;
    }
    int len = strlen(str);
    for(int i = len - 1; i >= 0; i--){
      printf("%c", str[i]);
    }
    printf("\n");
  }
  return 0;
}