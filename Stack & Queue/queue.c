#include <stdio.h>
#define MAX 3

typedef struct{
    int data[MAX];
    int head;
    int tail;
} Queue;

Queue antrian;

void Awal()
{
    antrian.head=antrian.tail=-1;
}

int Kosong()
{
    if(antrian.tail==-1)
        return 1;
    else
        return 0;
}

int Penuh()
{
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

int Enqueue(int data)
{
    if(Kosong()==1)
    {
        antrian.head=antrian.tail=0;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);
        void Tampil();
        {
            if(Kosong()==0)
            {
                for(int i=antrian.head; i<=antrian.tail; i++)
                {
                    printf("%d ", antrian.data[i]);
                }
            }
            else
                printf("Isi antrian kosong!");
        }
    }
    else if (Penuh()==0)
    {
        antrian.tail++;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);
    }
}

int Dequeue()
{
    int antri = antrian.data[antrian.head];
    for(int i=antrian.head; i<=antrian.tail; i++)
    {
        antrian.data[i] = antrian.data[i+1];
    }
    antrian.tail--;
    return antri;
}

void Tampil()
{
    if(Kosong()==0)
    {
        for(int i=antrian.head; i<=antrian.tail; i++)
        {
            printf("%d ", antrian.data[i]);
        }
    }
    else
        printf("Tidak ada data dalam antrian!");
}

void Hapus()
{
    antrian.head=antrian.tail=-1;
    printf("Data sudah dibersihkan!\n");
}

void main()
{
    int pilihan;
    int data;
    Awal();
    do
    {
        printf("\n");
        printf("1. MasukSatuData\n");
        printf("2. KeluarSatuData\n");
        printf("3. Lihat isi antrian\n");
        printf("4. Hapus isi antrian\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda? ");
        scanf("%d", &pilihan);
        switch(pilihan)
        {
            case 1:
                printf("Data = ");
                scanf("%d", &data);
                Enqueue(data);
                break;
            case 2:
                printf("Data yang keluar: %d", Dequeue());
                break;
            case 3:
                Tampil();
                break;
            case 4:
                Hapus();
                break;
        }
    }while(pilihan!=5);
}
