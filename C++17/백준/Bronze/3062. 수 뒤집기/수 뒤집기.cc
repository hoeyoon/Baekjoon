#include <stdio.h>

int str_len(char *s){
  int len = 0;
  while(*s != '\0'){
    len++;
    s++;
  }
  return len;
}

int pow(int a, int b){
  int sum = 1;
  for(int i = 0; i < b; i++){
    sum *= a;
  }
  return sum;
}

int str_to_int(char *s){
  int sum = 0;
  int i = 0;
  int len = str_len(s);
  for(int i = 0; i < len; i++){
    sum += (s[i] - '0') * pow(10, len - i - 1);
  }
  return sum;
}

void rev_str(char *s){
  int len = str_len(s);
  for(int i = 0; i < len / 2; i++){
    char temp = s[i];
    s[i] = s[len - 1 - i ];
    s[len - 1 - i] = temp;
  }
}

int count_len(int n){
  int count = 0;
  while(n != 0){
    n /= 10;
    ++count;
  }
  return count;
}

char *int_to_str(char *s, int n){
  int len = count_len(n);
  char *p = s + len - 1;
  while(n){
    *p-- = (n % 10) + '0';
    n /= 10;
  }
  *(p + (len + 1)) = '\0';
  return s;
}

int check(char *s){
  int len = str_len(s);
  int count = 0;
  for(int i = 0; i < len / 2; i++){
    if(s[i] == s[len - 1 - i]){
      count++;
    }
  }
  if(count == len / 2){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int t;
  scanf("%d", &t);

  char str[100001];
  for(int i = 0; i < t; i++){
    scanf("%s", str);
    int str_int1 = str_to_int(str);
    rev_str(str);
    int str_int2 = str_to_int(str);
    int sum = str_int1 + str_int2;
    int_to_str(str, sum);
    if(check(str) == 1){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}