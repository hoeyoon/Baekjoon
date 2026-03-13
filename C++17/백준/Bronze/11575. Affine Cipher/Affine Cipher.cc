#include <stdio.h>
#include <string.h>

int main(){
  int t;
  int a, b;
  char str[1000001];
  
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    scanf("%d %d", &a, &b);
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
      str[i] = ((a * (str[i] - 'A') + b) % 26) + 'A';
    }
    printf("%s\n", str);
  }
  return 0;
}