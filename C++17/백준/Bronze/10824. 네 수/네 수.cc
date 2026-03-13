#include <stdio.h>

int str_len(char *s){
  int len = 0;
  while(*s != '\0'){
    len++;
    s++;
  }
  return len;
}

void str_cat(char *s1, char *s2){
  int len1 = str_len(s1);
  int len2 = str_len(s2);
  char *p = s1 + len1;
  for(int i = 0; i < len2; i++){
    *p = *s2;
    s2++;
    p++;
  }
  *(p) = '\0';
}

long long pow(int a, int b){
  long long sum = 1;
  for(int i = 0; i < b; i++){
    sum *= a;
  }
  return sum;
}

long long str_to_int(char *s){
  int len = str_len(s);
  long long sum = 0;
  int i = 0;
  while(s[i] != '\0'){
    sum += (s[i] - '0') * pow(10, len - 1  - i);
    i++;
  }
  return sum;
}

int main(){
  char n[4][8];
  int len[4];
  for(int i = 0; i < 4; i++){
    scanf("%s", n[i]);
  }

  str_cat(n[0], n[1]);
  str_cat(n[2], n[3]);
  
  long long a = str_to_int(n[0]);
  long long b = str_to_int(n[2]);

  printf("%lld\n", a + b);
  return 0;
}