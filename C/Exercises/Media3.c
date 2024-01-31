#include <stdio.h>

int main(){
	double n1, n2, n3, n4;
	double nexam;
	
	scanf ("%lf" "%lf" "%lf" "%lf", &n1, &n2, &n3, &n4);
	
	double media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
	
	if (media > 7.0){
		printf ("Media: %.1lf\n", media);
		printf ("Aluno aprovado.\n");
	}
	
	else{
		if (media < 5.0){
			
			printf("Media: %.1lf\n", media);
			printf("Aluno reprovado.\n");
		}
		
		else if (media >= 5.0 && media <= 6.9){
			printf ("Media: %.1lf\n", media);
			printf ("Aluno em exame.\n");
			scanf ("%lf", &nexam);
			printf ("Nota do exame: %.1lf\n", nexam);
			media = (media + nexam) / 2;
			
			if(media >= 5.0){
				printf ("Aluno aprovado.\n");
				printf ("Media final: %.1lf\n", media);
			}
			
			else{
				printf ("Aluno reprovado.\n");
				printf ("Media final: %.1lf\n", media);
			}
		}
	}
	return 0;	
}
