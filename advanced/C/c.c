#include <stdio.h>

int main() {

    int n, p, t;
    int sum = 0, duhagi = 1;
    int plusminus = 1;
    int lm, rm;
    scanf("%d %d %d", &n, &p, &t);

    for (int i = 0; i < t-1; i++) {

        sum += duhagi;
        duhagi += plusminus;
        
        if (duhagi == 2 * n) plusminus = -1;
        if (duhagi == 1) plusminus = 1;
    }


    duhagi += plusminus;
    printf("%d %d\n", sum, duhagi);

    lm = sum % (2 * n);
    rm = (sum + duhagi) % (2 * n);
    printf("%d %d\n", lm, rm);

    if ((lm < 2 * p) || (2 * p - 1 <= rm)) {
        printf("Dehet YeonJwaJe ^~^\n");
    } else {
        printf("Hing...NoJam\n");
    }

    return 0;
}