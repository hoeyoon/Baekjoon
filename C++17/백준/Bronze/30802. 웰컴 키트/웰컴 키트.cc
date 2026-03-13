#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int size[6];
	for(int i = 0; i < 6; i++){
		scanf("%d", &size[i]);
	}
	
	int t, p;
	scanf("%d %d", &t, &p);
	
	int count = 0;
	for(int i = 0; i < 6; i++){
		if(size[i] % t == 0){
			count += size[i] / t;
		}
		else{
			count += size[i] / t + 1;
		}
	}
	
	printf("%d\n%d %d\n", count, n / p, n % p);
	return 0;
}