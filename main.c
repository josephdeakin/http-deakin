#include <stdio.h>
#include <string.h>

#define LOOP_LIMIT  25

int add2Numbers(int x, int y);
void bootHTTPServer();
char *reverseStr(char str[]);


int main() {

    bootHTTPServer();
    short x, y;

    x = 12;
    y = 14;
    /*printf("Hello, world! %i %i %i\n", x, y, x+y);

    for (int i=1; i<=LOOP_LIMIT; i++) {
        printf("%i\n", i);
    }*/

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

    int c, nl;
    /*c=getchar();
    while((nl = getchar())!=EOF) {
        if (nl == '\n') {
            break;
        }
        c++;
        printf("qqq %i", c);
    }
   printf("%i", c);*/

   int j = 4;
   int *pJ = &j;

    printf("value %d at address %p\n", j, pJ);

    printf("%d\n", add2Numbers(4, 5));


    char name[LOOP_LIMIT] = "Joseph";

    printf("%s\n", name);

    char reversedName[LOOP_LIMIT];
    
    strcpy(reversedName, reverseStr(name));

    printf("%s\n", reversedName);


    return 0;
}

char *reverseStr(char str[]) {
    static char reversed[LOOP_LIMIT];
    int len=0;
    while (str[len] != '\0')
        len++;

    for(int i=0; i<len; i++)
        reversed[i] = str[len-1-i];

    return reversed;
}


int add2Numbers(int x, int y) {
    return x+y;
}

void bootHTTPServer() {

    printf("-----------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------\n");
    printf("------------------DEAKIN HTTP SERVER BOOTING...------------------\n");
    printf("-----------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------\n\n\n");

}