#include <stdio.h>

int main(){
  int a[10];
  int result = 0;
  for(int i = 0; i < 10; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 10; i++){
    a[i] = a[i] % 42;  
  }
  
  for(int i = 0; i < 10; i++){
    int count = 0;
    for(int j = i + 1; j < 10; j++){
      if(a[i] == a[j]){
        count++;
      }
    }
    if(count == 0){
      result++;
    }
  }
  printf("%d\n", result);
  return 0;
}