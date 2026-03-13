#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    int n;
    scanf("%d", &n);
    int shop;
    int max = -1;
    int min = 100;
    for(int i = 0; i < n; i++){
      scanf("%d", &shop);
      if(shop > max){
        max = shop;
      }
      if(shop < min){
        min = shop;
      }
    }
    int r = (max - min) * 2;
    printf("%d\n", r);    
  }
  return 0;
}