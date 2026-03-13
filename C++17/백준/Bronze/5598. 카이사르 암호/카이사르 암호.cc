#include <stdio.h>
#include <string.h>

int main(){
  char str[1001];
  scanf("%s", str);

  int i = 0;
  while(str[i] != '\0'){
    if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C'){
      str[i] = str[i] + 23;
    }
    else{
      str[i] = str[i] - 3;
    }
    i++;
  }
  printf("%s\n", str);
  return 0;
}