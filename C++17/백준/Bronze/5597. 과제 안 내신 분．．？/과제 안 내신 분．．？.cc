#include <stdio.h>

int main(){
	int a[30], x;
	
	for(int i = 0; i < 30; i++){
		a[i] = 0;
	}
	for(int i = 0; i < 28; i++){
		scanf("%d", &x);
		a[x -1] = x;
	}
	for(int i = 0; i < 30; i++){
		if(a[i] == 0){
			printf("%d\n", i + 1);
		}
	}
	
	return 0;
}