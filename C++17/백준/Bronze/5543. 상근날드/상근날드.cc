#include <stdio.h> 

int main(){
  int burger[3];
  int drink[2];
  for(int i = 0; i < 3; i++){
    scanf("%d", &burger[i]);
  }
  for(int i = 0; i < 2; i++){
    scanf("%d", &drink[i]);
  }
  int min_burger = 2001;
  int min_drink = 2001;
  for(int i = 0; i < 3; i++){
    if(burger[i] < min_burger){
      min_burger = burger[i];
    }
  }
  for(int i = 0; i < 2; i++){
    if(drink[i] < min_drink){
      min_drink = drink[i];
    }
  }
  printf("%d\n", min_burger + min_drink - 50);
  return 0;
}