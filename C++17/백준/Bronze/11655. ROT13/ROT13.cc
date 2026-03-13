#include <stdio.h>
#include <string.h>

int main(){
  char str[128];
  scanf("%[^\n]s", str);
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    if('a' <= str[i] && str[i] <= 'z'){
      str[i] = (str[i] - 'a' + 13) % 26 + 'a';
    }
    else if('A' <= str[i] && str[i] <= 'Z'){
      str[i] = (str[i] - 'A' + 13) % 26 + 'A';
    }
  }
  printf("%s\n", str);
  return 0;
}