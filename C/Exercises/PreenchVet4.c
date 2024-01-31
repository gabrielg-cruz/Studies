#include <stdio.h>

int main (){
	int i, j, x, impar[5], par[5], qtdimp = 0, qtdpar = 0;
	
	
	for (i = 0; i < 15; i++){
		scanf ("%d", &x);
		
		if (x % 2 == 0){
			par[qtdpar] = x;
			qtdpar ++;
			
			if(qtdpar == 5){
				for (j = 0; j < 5; j++){
				printf ("par[%d] = %d\n", j, par[j]);
				qtdpar = 0;
				}
			}
		}
		
		
		else{
			impar[qtdimp] = x;
			qtdimp++;
			
			if (qtdimp == 5){
				for (j = 0; j < 5; j++){
					printf ("impar[%d] = %d\n", j, impar[j]);
					qtdimp = 0;
				}
			}
		}
	}
	

		for (j = 0; j < qtdimp; j++){
			printf ("impar[%d] = %d\n", j, impar[j]);
			}
	
		for (j = 0; j < qtdpar; j++){
			printf ("par[%d] = %d\n", j, par[j]);
			}
	
	return 0;
}
