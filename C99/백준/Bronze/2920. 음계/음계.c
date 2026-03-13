#include <stdio.h>

int main(){
  int a[8], count = 0;
  for(int i = 0; i < 8; i++){
    scanf("%d", &a[i]);
  }
  if(a[0] == 1){
    for(int i = 1; i < 8; i++){
      if(a[i] == i + 1){
        count = 1;
      }
      else{
        count = 0;
        break;
      }
    }
  }
  if(a[0] == 8){
    for(int i = 1; i < 8; i++){
      if(a[i] == 8 - i){
        count = 2;
      }
      else{
        count = 0;
        break;
      }
    }
  }
  if(count == 1){
    printf("ascending\n");
  }
  else if(count == 2){
    printf("descending\n");
  }
  else{
    printf("mixed\n");
  }
  return 0;
}