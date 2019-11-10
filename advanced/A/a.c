#include <stdio.h>
#include <stdlib.h>

// TODO: 'warn_unused_result'
//       (ignore return value of scanf)
int main(int argc, char* argv[]) {

    int i = 1, idx = 0;
    int t, sum = 0;
    int isHwStart;

    int* points;
    int* times;
    
    // get total minute of semester
    if (scanf("%d", &t) == 1);

    // set hw's points and ramaining time for each minute
    points = (int*)malloc(sizeof(int) * (t + 1));
    times = (int*)malloc(sizeof(int) * (t + 1));

    while (i <= t) {
        if (scanf("%d", &isHwStart) == 1);

        // Case 1: new hw starts
        if (isHwStart == 1) {
            // get points and times for new hw
            if (scanf("%d", &points[i]) == 1);
            if (scanf("%d", &times[i]) == 1);
            // set idx of hw to do.
            idx = i;
        } // Case 2: continue present hw

        // decrease time of hw to be done about index
        times[idx]--;

        /* if time for idx is 0,
         * update sum and find appropriate idx
         */
        if (times[idx] == 0) {
            sum += points[idx];
            
            do {
                idx--;
            } while (times[idx] == 0 && idx != 0);
        }

        // increase i, therefore time goes
        i++;
    }

    // print total points of this semester that she got.
    printf("%d", sum);
    return 0;
}