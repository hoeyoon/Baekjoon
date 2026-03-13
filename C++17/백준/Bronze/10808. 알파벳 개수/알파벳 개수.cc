#include <stdio.h>
#include <string.h>

int main(){
  char str[128];
  scanf("%s", str);
  int apb[26] = {0, };
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    for(int j = 0; j < 26; j++){
      if(str[i] == 'a' + j){
        apb[j]++;
      }
    }
  }
  for(int i = 0; i < 26; i++){
    printf("%d ", apb[i]);
  }
  return 0;
}