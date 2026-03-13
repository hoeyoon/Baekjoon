#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    int n;
    scanf("%d", &n);
    int count = 0;
    while(n > 0){
      if(n % 2 == 1){
        printf("%d ", count);
      }
      n = n / 2;
      count++;
    }
    printf("\n");
  }
  return 0;
}