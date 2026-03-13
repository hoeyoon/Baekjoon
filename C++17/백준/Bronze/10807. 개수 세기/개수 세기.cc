#include <stdio.h>

int main(){
	int a[100];
	int x, y, count = 0;
	scanf("%d", &x);
	
	for(int i = 0; i < x; i++){
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &y);
	for(int i = 0; i < x; i++){
		if(a[i] == y){
			count++;
		}
	}
	printf("%d\n", count);
	
	return 0;
}