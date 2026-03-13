#include <stdio.h>
#include <string.h>

int main(){
  int n;
  char str[21];

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s", str);
    if(6 <= strlen(str) && strlen(str) <= 9){
      printf("yes\n");
    }
    else{
      printf("no\n");
    }
  }
  return 0;
}