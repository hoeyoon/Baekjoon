#include <stdio.h>

int main(){
  int n, m;
  
  scanf("%d %d", &n, &m);

  int arr[100] = {0, };
  for(int i = 0; i < n; i++){
    arr[i + 1] = i + 1;
  }
  int a, b;
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    for(int j = 0; j <= (b - a) / 2; j++){
     int temp = arr[a + j];
      arr[a + j] = arr[b - j];
      arr[b - j] = temp;
    }
  }
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i + 1]);
  }
  return 0;
}