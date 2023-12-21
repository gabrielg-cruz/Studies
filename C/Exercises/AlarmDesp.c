#include <stdio.h>

int main (){
	
	int h1, m1, h2, m2, minini, minfim, totalmin, mindia = 0;
	
	while(1){
		scanf ("%d", &h1);
		scanf ("%d", &m1);
		scanf ("%d", &h2);
		scanf ("%d", &m2);
	
		if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)break;
	
		minini = (h1 * 60) + m1;
		minfim = (h2 * 60) + m2;
		totalmin = minfim - minini;
	
	
		if (minini == minfim){
		
			int mindia = 60 * 24;
			printf("%d\n", mindia);
		}
	
		else if (minini > minfim){
		
			int mindia = 60 * 24;
			totalmin = mindia + (minfim - minini);
			printf("%d\n", totalmin);
		}
	
		else{
		
			printf("%d\n", totalmin);
		}
	}

	return 0;
	}
