#include <stdio.h>

int main(){
  int x;
  char y[1000];
  scanf("%d", &x);
  for(int i = 1; i <= x; i++){
    scanf("%s", y);
    int j = 0;
    while(y[j] != '\0'){
      j++;
    }
    printf("%c%c", y[0], y[j-1]);
    printf("\n");
  }
  return 0;
}