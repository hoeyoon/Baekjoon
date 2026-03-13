#include <stdio.h>

int main(){
  int price, num;
  int x=0;
  scanf("%d", &price);
  scanf("%d", &num);

  int price2, num2;
  for(int i = 1; i <= num; i++){
    scanf("%d %d", &price2, &num2);
    x = x + (price2*num2);
  }
  if(x == price){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}