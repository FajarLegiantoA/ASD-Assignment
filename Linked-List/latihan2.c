//Pertemuan Kelas Linked List 21 Maret 2022
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void awal()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukan data: \n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n Data berhasil tersimmpan di NODE awal!");
    }
}

void akhir()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukan data: \n");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Berhasil menyimpan dalam NODE");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\n Data berhasil tersimmpan di NODE awal!");
        }
    }
}

void sembarang(){
    int i, loc,item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW!");
    }
    else
    {
        printf("Masukan data: \n");
        scanf("%d", &item);
        ptr->data = item;
          printf("Mau Simpan di lokasi mana? \n");
        scanf("%d", &loc);
        temp = head;
        for(i=0;i<loc;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\n Tidak dapat tersimpan!");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\n NODE berhasil disimpan!");
    }
}

void lihat()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Tidak ada data!!!");
    }
    else
    {
        printf("Cetak data....");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice = 0;
    while (choice != 5)
    {
        printf("\n ******** Menu Latihan Linked List ********\n");
        printf("\n=============\n");
        printf("\n1. Input data di NODE awal \n2.Input data di NODE akhir \n3.Input data di NOTE sembarang \n4.Lihat data dalam Linked List \n5. Keluar");
        printf("\n Pilihanmu? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            awal();
            break;
        case 2:
            akhir();
            break;
        case 3:
            sembarang();
            break;
        case 4:
            lihat();
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("silahkan masukan pilihanmu....");
            break;
        }
        /* code */
    }
}
