#include <stdio.h>
#include <string.h>

int main(){
  int n;
  scanf("%d", &n);
  char str[51];
  for(int i = 0; i < n; i++){
    getchar();
    scanf("%[^\n]s", str);
    
    printf("%d. ", i + 1);
    printf("%s\n", str);
  }
  return 0;
}