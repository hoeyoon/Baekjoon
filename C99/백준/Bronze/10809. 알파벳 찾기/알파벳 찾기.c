#include <stdio.h>

int main(){
  char S[101];
  scanf("%s", S);
  for(int i = 97; i < 123; i++){
    int j = 0;
    while(S[j] != '\0'){
      if(S[j] == (char)i){
        break;
      }
      j++;
    }
    if(S[j] == (char)i){
      printf("%d ", j);
    }
    else{
      printf("-1 ");
    }
  }
  return 0;
}