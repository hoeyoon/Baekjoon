#include <stdio.h>

int main(){
  char test[81];
  int x;
  int score;
  int y;
  scanf("%d", &x);
  for(int i = 0; i < x; i++){
    scanf("%s", test);
    int j = 0;
    score = 0;
    y = 1;
    while(test[j] != '\0'){
      if(test[j] == 'O'){
        score+=y;
        y++;
      }
      else if(test[j] == 'X'){
        y = 1;
      }
      j++;
    }
    printf("%d\n", score);
  }
  return 0;
}