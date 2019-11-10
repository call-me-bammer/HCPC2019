#include <stdio.h>

int main(int argc, char* argv[]) {

    int m;
    scanf("%d", &m);
    int arr[m + 1];

    int fromhere = 1;
    int sum = 0;
    
    //read value initially.
    scanf("%d", arr + 1);

    int i = 2, j;
    //read next.
    while (i <= min && scanf("%d", arr + i)) {

        //compare.
        if (arr[i-1] > arr[i]) {

            //이전에 저장한 것부터 tmp_sum에 더해서
            //그걸 sum에다 합하기.
            if (i-2 > 0) {
                sum += arr[i-1] * ((i-1) - fromhere); 
                printf("sum is %d.\n", sum);
            }            

            fromhere = i;
        }

        i++;
    } 

    for (j = fromhere; j < i; j++) {
        sum += arr[i-1] - arr[] * (i - fromhere);
    }
    printf("%d", sum);
    return 0;
}