#include <stdio.h>

int main (){
	int a, b, c;
	
	while (scanf ("%d %d %d", &a, &b, &c) != EOF){
	
	if (a != b && a != c)
		printf("A\n");
		
	else if (b != c && b != a)
		printf ("B\n");
		
	else if (c != a && c != b)
		printf ("C\n");
		
	else
		printf ("*\n");

	}
	return 0;
}
