#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  char str[100][101];
  for(int i = 0; i < n; i++){
    scanf("%s", str[i]);
  }
  
  int t;
  scanf("%d", &t);
  
  if(t == 1) {
    for(int i = 0; i < n; i++){
      printf("%s\n", str[i]);
    }
  } 
    
  else if(t == 2){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        printf("%c", str[i][n - j - 1]);
      }
      printf("\n");
    }
  }

  else if(t == 3){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        printf("%c", str[n - i - 1][j]);
      }
      printf("\n");
    }
  }
  return 0;
}