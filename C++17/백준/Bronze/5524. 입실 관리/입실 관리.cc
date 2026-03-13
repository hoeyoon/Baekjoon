#include <stdio.h>
#include <string.h>

int main(){
  int n;
  scanf("%d", &n);
  char str[21];
  for(int i = 0; i < n; i++){
    scanf("%s", str);
    int len = strlen(str);
    for(int j = 0; j < len; j++){
      if('A' <= str[j] && str[j] <= 'Z'){
        str[j] = str[j] - 'A' + 'a';
      }
    }
    printf("%s\n", str);
  }
  return 0;
}