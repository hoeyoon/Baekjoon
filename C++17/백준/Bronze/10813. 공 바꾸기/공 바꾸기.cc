#include <stdio.h>

void swap(int arr[], int a, int b){
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  int arr[100] = {0, };
  int a, b;

  for(int i = 0; i < n; i++){
    arr[i + 1] = i + 1;
  }
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    swap(arr, a, b);
  }
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i + 1]);
  }
  return 0;
}