#include <stdio.h>

int str_len(char *s){
  int count = 0;
  while(*s != '\0'){
    count++;
    s++;
  }
  return count;
}

void sort_str(char *s){
  int len = str_len(s);
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      if(s[i] < s[j]){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
      }
    }
  }
}

int check_str(char *s1, char *s2){
  int len1 = str_len(s1);
  int len2 = str_len(s2);
  int count = 0;
  if(len1 == len2){
    for(int i = 0; i < len1; i++){
      if(s1[i] == s2[i]){
        count++;
      }
    }
    if(count == len1){
      return 1;
    }
    else{
      return 0;
    }
  }
  else{
    return 0;
  }
}

int main(){
  int n;
  scanf("%d", &n);

  char str[n][1001];
  for(int i = 0; i < n; i++){
    scanf("%s %s", str[0], str[1]);
    sort_str(str[0]);
    sort_str(str[1]);
    if(check_str(str[0], str[1]) == 1){
      printf("Possible\n");
    }
    else{
      printf("Impossible\n");
    }
  }
  return 0;
}