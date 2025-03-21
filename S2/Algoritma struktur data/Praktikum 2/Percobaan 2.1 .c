#include <stdio.h>
#include <stdlib.h>

#define MAXSTACK 5

typedef int ItemType;

/* Definisi struktur stack */
typedef struct {
    int Item[MAXSTACK]; /* Array yang berisi data tumpukan */
    int Count;          /* menunjukkan indeks data paling atas dari stack */
} Stack;

void InitializeStack(Stack *S) {
    S->Count = 0;
}

int Empty(Stack *S) {
    return (S->Count == 0);
}

int Full(Stack *S) {
    return (S->Count == MAXSTACK);
}

void Push(ItemType x, Stack *S) {
    if (S->Count == MAXSTACK)
        printf("Stack penuh! Data tidak dapat masuk!\n");
    else {
        S->Item[S->Count] = x;
        ++(S->Count);
    }
}

int Pop(Stack *S) {
    if (S->Count == 0) { // stack kosong
        printf("Stack masih kosong!\n");
        return -1; // Mengembalikan nilai default jika stack kosong
    } else {
        --(S->Count);
        return (S->Item[S->Count]);
    }
}

int main() {
    int i, input;
    Stack tumpukan;

    InitializeStack(&tumpukan);

    for (i = 0; i < MAXSTACK; i++) {
        printf("Masukkan isi stack ke- %d : ", i + 1);
        scanf("%d", &input);
        Push(input, &tumpukan);
    }

    for (i = MAXSTACK; i > 0; i--) {
        printf("Isi stack ke- %d : ", i);
        printf("%d \n", Pop(&tumpukan));
    }
    system("pause");
}