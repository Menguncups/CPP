#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void main() {
    int *fibo;
    int i;

    fibo = malloc(MAX * sizeof(int));

    *(fibo + 0) = 0;  
    *(fibo + 1) = 1;

    for (i = 2; i < MAX; i++) {
        *(fibo + i) = *(fibo + i - 2) + *(fibo + i - 1);
    }

    printf("%d Bilangan Fibonacci Pertama adalah:\n", MAX);
    for (i = 1; i < MAX; i++) {
        printf("%d ", *(fibo + i));
    }

    free(fibo);
    system("pause");
}