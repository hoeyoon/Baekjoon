#include <stdio.h>
#include <string.h>

int main(){
  char str[70];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s", str);
    int len = strlen(str);
    if(str[len - 1] % 2 == 0){
      printf("even\n");
    }
    else if(str[len - 1] % 2 == 1){
      printf("odd\n");
    }
  }
  return 0;
}