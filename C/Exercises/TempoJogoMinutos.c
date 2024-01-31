#include <stdio.h>

int main() {
    int iniHora, iniMin, fimHora, fimMin, duracaoHora, duracaoMin;

    scanf("%d", &iniHora);
    scanf("%d", &iniMin);
    scanf("%d", &fimHora);
    scanf("%d", &fimMin);

    if (iniHora == fimHora && iniMin == fimMin) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } 
    else if (fimHora > iniHora || (fimHora == iniHora && fimMin > iniMin)) {
        duracaoHora = fimHora - iniHora;
        duracaoMin = fimMin - iniMin;

        if (duracaoMin < 0) {
            duracaoHora--;
            duracaoMin += 60;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMin);
    } 
    else if (iniHora > fimHora || (iniHora == fimHora && iniMin > fimMin)) {
        duracaoHora = 24 - iniHora + fimHora;
        duracaoMin = fimMin - iniMin;

        if (duracaoMin < 0) {
            duracaoHora--;
            duracaoMin += 60;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMin);
    }

    return 0;
}

