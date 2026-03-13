#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char chr[3][9];
	int n;
	for(int i = 0; i < 3; i++){
		scanf("%s", chr[i]);
		if((strcmp(chr[i], "Fizz") != 0) && (strcmp(chr[i], "Buzz") != 0) && (strcmp(chr[i], "FizzBuzz") != 0)){
			n = atoi(chr[i]) + 3 - i;
		}
	}
	if(n % 15 == 0){
		printf("FizzBuzz\n");
	}
	else if(n % 3 == 0){
		printf("Fizz\n");
	}
	else if(n % 5 == 0){
		printf("Buzz\n");
	}
	else{
		printf("%d\n", n);
	}
	return 0;
}