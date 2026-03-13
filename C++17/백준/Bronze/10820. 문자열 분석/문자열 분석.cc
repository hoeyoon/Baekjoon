#include <stdio.h>
#include <string.h>

int main(){
  while(1){
    char str[101] = {0};
    scanf("%[^\n]s", str);
    
    if(str[0] == '\0'){
      break;
    }
    
    int a = 0, b = 0, c = 0, d = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
      if('a' <= str[i] && str[i] <= 'z'){
        a++;
      }
      if('A' <= str[i] && str[i] <= 'Z'){
        b++;
      }
      if('0' <= str[i] && str[i] <= '9'){
        c++;
      }
      if(str[i] == ' '){
        d++;
      }
    }
    printf("%d %d %d %d\n", a, b, c, d);
    scanf("%*c");
  }
  return 0;
}