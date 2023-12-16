#include <stdio.h>

int main(){
	int ini, fim, duracao;
	
	scanf ("%d", &ini);
	scanf ("%d", &fim);
	
	if (ini == fim){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	else if (fim > ini){
		duracao = -ini + fim;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	
	else if (ini > fim){
		duracao = (24 - ini) + fim;
		printf ("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	return 0;
}
