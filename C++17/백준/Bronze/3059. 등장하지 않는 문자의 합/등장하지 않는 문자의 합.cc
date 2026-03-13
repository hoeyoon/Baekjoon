#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    char str[1001];
    scanf("%s", str);
    int apb[26] = {0, };
    char *p = str;
    while(*p != '\0'){
      if('A' <= *p && *p <= 'Z'){
        apb[*p - 'A']++;
      }
      p++;
    }
    int sum = 0;
    for(int i = 0 ; i < 26; i++){
      if(apb[i] == 0){
        sum += i + 'A';
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}