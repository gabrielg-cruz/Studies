#include <stdio.h>

int main() {
    int b, n, i, d, c, v, r[21], compar;

    do {
        scanf("%d %d", &b, &n);

        if (b == 0 && n == 0) {
            break;
        }

        for (i = 1; i <= b; i++) {
            scanf("%d", &r[i]);
        }

        for (i = 0; i < n; i++) {
            scanf("%d %d %d", &d, &c, &v);
            r[d] -= v;
            r[c] += v;
        }

        compar = 0;

        for (i = 1; i <= b; i++) {
            if (r[i] < 0) {
                compar = 1;
                break;
            }
        }

        if (compar == 1) {
            printf("N\n");
        } else {
            printf("S\n");
        }

    } while (b != 0 && n != 0);

    return 0;
}
