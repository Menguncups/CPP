#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int Item;
    struct node *link;
} Node;

typedef struct {
    Node *Front;
    Node *Rear;
} Queue;

// Prosedur untuk menyisipkan data pada antrian
void Tambah(Queue *Q, int y) {
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->Item = y;
    ptr->link = NULL;

    if (Q->Front == NULL) {
        Q->Front = Q->Rear = ptr;
    } else {
        Q->Rear->link = ptr;
        Q->Rear = ptr;
    }
}

// Prosedur untuk menghapus data dari antrian
int Hapus(Queue *Q) {
    if (Q->Front == NULL) {
        printf("\n\n\t\tAntrian Kosong\n\n");
        return 0;
    }

    int num = Q->Front->Item;
    Node *temp = Q->Front;
    Q->Front = Q->Front->link;
    free(temp);

    if (Q->Front == NULL)
        Q->Rear = NULL;

    return num;
}

// Menampilkan isi antrian
void Tampil(Node *N) {
    printf("\nFront -> ");
    while (N != NULL) {
        printf("%5d", N->Item);
        N = N->link;
    }
    printf(" <- Rear");
}

// Menghitung jumlah elemen dalam antrian
int Count(Node *N) {
    int c = 0;
    while (N != NULL) {
        N = N->link;
        c++;
    }
    return c;
}

int main() {
    int item;
    Queue Q;
    Q.Front = Q.Rear = NULL;

    Tambah(&Q, 11);
    Tambah(&Q, 12);
    Tambah(&Q, 13);
    Tambah(&Q, 14);
    Tambah(&Q, 15);
    Tambah(&Q, 16);
    Tambah(&Q, 17);

    Tampil(Q.Front);
    printf("\nJumlah data pada antrian : %d", Count(Q.Front));

    item = Hapus(&Q);
    printf("\nNilai yang dihapus : %d", item);
    item = Hapus(&Q);
    printf("\nNilai yang dihapus : %d", item);
    item = Hapus(&Q);
    printf("\nNilai yang dihapus : %d", item);

    Tampil(Q.Front);
    printf("\nJumlah data pada antrian : %d", Count(Q.Front));
    printf("\n");
    
    system("pause");
    return 0;
}
