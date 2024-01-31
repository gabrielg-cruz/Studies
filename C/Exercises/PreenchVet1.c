#include <stdio.h>

int main (){
	int i, x;
	int	n[10];
	
	scanf ("%d", &x);

	for (i = 0; i < 10; i++){
		if(i == 0){
			n[i] = x;
			printf ("N[%d] = %d\n", i, n[i]);
		}

		else{
			
			n[i] = n[i - 1] * 2;
			printf("N[%d] = %d\n", i, n[i]);
	}}
	
	return 0;
}
