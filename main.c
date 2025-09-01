#include <stdio.h>

#define LOOP_LIMIT  25

int main() {
    short x, y;

    x = 12;
    y = 14;
    printf("Hello, world! %i %i %i\n", x, y, x+y);

    for (int i=1; i<=LOOP_LIMIT; i++) {
        printf("%i\n", i);
    }

    int lower, higher, temp;
    float result;

    lower = higher = 1;

    // 1, 1, 2, 3, 5
    
    /*for (int i=0; i<LOOP_LIMIT; i++) {
        temp = higher;
        higher = lower + higher;
        lower = temp;
        result = (float)higher / lower;
        printf("%i. lower %ld higher %ld golden: %f\n", i+1, lower, higher, result);
    }*/

    lower = higher = 1;
    for (int i=0; i<LOOP_LIMIT; i++) {
        higher = lower + higher;
        lower = higher - lower;
        if(i == LOOP_LIMIT - 1) {
            printf("%d\n", lower);
        } else {
            printf("%d, ", lower);
        }
    }


    return 0;
}
