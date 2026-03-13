#include <stdio.h>

int main(){
  int a[3];
  for(int i = 0; i < 3; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(a[i] < a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("%d\n", a[1]);
  return 0;
}