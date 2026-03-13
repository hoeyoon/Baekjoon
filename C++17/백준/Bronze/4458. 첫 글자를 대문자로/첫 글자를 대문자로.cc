#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    char str[31];
    getchar();
    scanf("%[^\n]s", str);
    if('a' <= str[0] && str[0] <= 'z'){
      str[0] = str[0] - 'a' + 'A';
    }
    printf("%s\n", str);
  }
  return 0;
}