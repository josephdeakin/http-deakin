#include <stdio.h>
#include <string.h>
#include <limits.h>

#define LOOP_LIMIT  25

int add2Numbers(int x, int y);
void bootHTTPServer();
char *reverseStr(char str[]);
int any(char s1[], char s2[]);


struct LList {
    int num;
    void *next;
} LList;

int main() {

    short x, y;

    x = 12;
    y = 14;
    /*printf("Hello, world! %i %i %i\n", x, y, x+y);

    for (int i=1; i<=LOOP_LIMIT; i++) {
        printf("%i\n", i);
    }*/

    int lower, higher;
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

    short lim, temp;
    lim=1;
    temp=0;

    while(lim > temp) {
        temp = lim;
        lim++;
    }
    printf("short range comp - %d >= x >= %d\n", lim, temp);
    printf("short range lim - %d ... %d\b\a\f\n\r\t\v\\\\'\"F", SHRT_MIN, SHRT_MAX);
    printf("char range %c %c\n", CHAR_MIN, CHAR_MAX);


    char s1[] = "aaaaaaaabb";
    char s2[] = "uytrewqbb";
    printf("%d \n", any(s1, s2));


    return 0;
}
int any(char s1[], char s2[]) {
    int i, len1, len2;
    while (s1[len1] != '\0') {
        printf("scan s1 %s\n", s1);
        len1++;
    }
    i=0;
    while (s2[len2] != '\0') {
        len2++;
        printf("scan s2\n");
    }
    //int j, k = 0;
    for(int j=0; j < len1; j++) {
        for (int k=0; k<len2; k++) {
            //printf("compare %c == %c; j=%d, k=%d;\n", s1[j], s2[k], j, k);
            if(s1[j] == s2[k]) {
                return j;
            }
        }
    }
    return -1;
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