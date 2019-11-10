#include <stdio.h>
#include <math.h>

int main() {
    int H, x;
    int sum = 0;
    int c;

    scanf("%d %d", &H, &x);
    
    int i;
    for(i = 0; i < H; i++) {
        scanf("%d", &c);
        sum += (c * (int)(pow(x, i+1)% ((int)pow(10, 9) + 7))); 
        sum = sum % ((int)pow(10, 9) + 7) ;
    }
    printf("%d\n", sum);
    return 0;
}
