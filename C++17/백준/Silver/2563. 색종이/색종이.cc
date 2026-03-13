#include <stdio.h>

int main(){
  int arr[100][100] = {0, };
  int a, b, n;
  int count = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d %d", &a, &b);
    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
        arr[a + j][b + k] = 1;
      }
    }
  }
  for(int i = 0; i < 100; i++){
    for(int j = 0; j < 100; j++){
      if(arr[i][j] == 1){
        count++;
      }
    }
  }
  printf("%d\n", count);
  return 0;
}