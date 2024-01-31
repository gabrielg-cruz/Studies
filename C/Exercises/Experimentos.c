#include <stdio.h>

int main (){
	int n, qtd, c = 0, r = 0, s = 0, ent = 0;
	char tipo;
	double porcemC, porcemR, porcemS, total;
	
	scanf ("%d", &n);
	
	while (ent < n){
		scanf ("%d %c", &qtd, &tipo);
		
		if (tipo == 'C')
			c = qtd + c;
		
		else if (tipo == 'R')
			r = qtd + r;
			
		else if (tipo == 'S')	
			s = qtd + s;
		
		ent++;
	}
	
	total = s + c + r;
	
	porcemC = (c / total) * 100;
	porcemR = (r / total) * 100;
	porcemS = (s / total) * 100;
	
	printf ("Total: %.0lf cobaias\n", total);
	printf ("Total de coelhos: %d\n", c);
	printf ("Total de ratos: %d\n", r);
	printf ("Total de sapos: %d\n", s);
	
	printf ("Percentual de coelhos: %.2lf %%\n", porcemC);
	printf ("Percentual de ratos: %.2lf %%\n", porcemR);
	printf ("Percentual de sapos: %.2lf %%\n", porcemS);
	
	return 0;
}
