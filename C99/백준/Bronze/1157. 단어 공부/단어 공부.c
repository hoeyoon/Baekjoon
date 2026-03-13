#include <stdio.h>
#include <string.h>

int main(){
  int max = 0;
  int len;
  char result;
  char str[1000008];
  int apb[26];

  scanf("%s", str);
  len = strlen(str);

  for(int i = 0; i < len; i++){
    if(str[i] >= 'a'){
      apb[str[i]-'a']++;
    }
    else{
      apb[str[i]-'A']++;
    }
  }
  for(int i = 0; i < 26; i++){
    if(apb[i] == max){
      result = '?';
    }
    else if(apb[i] > max){
      max = apb[i];
      result = 'A' + i;
    }
  }
  printf("%c\n", result);
  return 0;
}