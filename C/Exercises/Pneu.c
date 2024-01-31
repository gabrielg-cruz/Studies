#include <stdio.h>

int main(){
	int pressaoAtual, pressaoDesejada, diferenca;
	
	scanf ("%d", &pressaoDesejada);
	scanf ("%d", &pressaoAtual);
	
	diferenca = pressaoDesejada - pressaoAtual;
	
	printf ("%d\n", diferenca);
	
	return 0;
}
