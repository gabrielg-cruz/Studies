#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, x;
    int contagem[2001] = {0}; 
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        contagem[x]++;
    }

    for (i = 1; i <= 2000; i++) {
        if (contagem[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, contagem[i]);
        }
    }
    return 0;
}
