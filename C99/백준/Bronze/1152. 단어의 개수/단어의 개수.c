#include <stdio.h>
#include <string.h>

int main(){
  char word[1000001];
  int count = 0;
  scanf("%[^\n]s", word);
  if(word[0] != ' '){
    count++;
  }
  for(int i = 0; i < strlen(word); i++){
    if(word[i] != ' ' && word[i - 1] == ' '){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}