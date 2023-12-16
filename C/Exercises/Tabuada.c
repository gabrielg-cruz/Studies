#include <stdio.h>

int main (){
	
	int n;
	scanf("%d", &n);
	int i = 1;
	
	for(i; i < 11; i++){
		int mult = n * i;
		printf("%d x %d = %d\n", i , n, mult);
		
	}
}
