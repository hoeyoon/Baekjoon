#include <stdio.h>
#include <string.h>

int main(){
  char str[101];
  for(int i = 0 ; i < 3; i++){
    int count = 1;
    int max = 1;
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len - 1; i++){
      if(str[i] == str[i + 1]){
        count++;
        if(max < count){
          max = count;
        }
      }
      else{
        count = 1;
      }
    }
    printf("%d\n", max);
  }
  return 0;
}