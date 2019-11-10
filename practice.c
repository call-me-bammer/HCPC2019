#include <stdio.h>
#include <stdlib.h>

/* if n == 5,
 * (5 + 1) / 2 == 3점 이상으로 주언이형이 이길.. 수! 있으면.
 * 한 번의 시행 당,
 * '작은 수를 내는 사람이' 1 득점.
 * 
 */

// 5 이면 이김.
// 2 1 3 5 6 j
// 1 1 3 2 5 sajang

// 5 이면 짐.
// 8 7 6 5 4
// 4 4 4 4 4

void sort_asc(int* a, int n);
void sort_dsc(int* a, int n);

int main(int argc, char* argv[]) {

    int* ju;
    int* jusajang;
    int i, j;
    int len, point;

    int min = (len + 1) / 2;

    scanf("%d", &len);
    ju = (int*)malloc(sizeof(int) * len);
    jusajang = (int*)malloc(sizeof(int) * len);

    for (i = 0; i < len; i++) {
        scanf("%d", ju + i);
    }
    
    for (i = 0; i < len; i++) {
        scanf("%d", jusajang + i);
    }

    // 주언 내림차순 정렬
    // 사장 오름차순 정렬

    // 주언 0 ... 최소 점수 min으로 이길 때까지 끊어서
    // 다시 거꾸로 정렬

    // 0 ... 비교! 하다가
    // point만큼 도달하면

    // 탈출 후,
    // point에 따라서 YES NO 출력

    sort_asc(ju, len);
    for (i = 0; i < len; i++) {
        printf("%d ", ju[i]);
    }
    printf("\n");

    return 0;
}

void sort_asc(int* a, int n) {
    
    int i, j, tmp;
    for (j = 1; j <= n; j++) {

        for (i = j; i > 0; i--) {

            if (a[i - 1] > a[i]) {
                tmp = a[i];
                a[i] = a[i - 1];
            } else {
                a[i - 1] = tmp;
            }
        }
    }
}

void sort_dsc(int* a, int n) {
    return;
}