#include <stdio.h>

void check_apb(char *s, int *n){
  while(*s != '\0'){
    if('a' <= *s && *s <= 'z'){
      n[*s - 'a']++;
    }
    s++;
  }
}

int count_apb(int *n){
  for(int i = 0; i < 26; i++){
    if(n[i] == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  char str[201];
  while(1){
    int apb[26] = {0, };
    scanf("%[^\n]s", str);
    if(str[0] == '*'){
      break;
    }
    check_apb(str, apb);
    if(count_apb(apb) == 1){
      printf("Y\n");
    }
    else{
      printf("N\n");
    }
    getchar();
  }
  return 0;
}