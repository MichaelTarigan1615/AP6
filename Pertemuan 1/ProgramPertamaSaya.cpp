#include <stdio.h>
#include <stdlib.h>

int main() {
    int nim;
    char kom;
    float ip;
    char nama[50];//memberi batas maksimal untuk char nama sebanyak 50 karakter
    system("cls");

    printf("Hello, World!\n");

    printf("Masukkan nama   : ");
    //scanf("%s", nama);
    gets(nama); 
    //gets : get string

    printf("Masukkan NIM    : ");
    scanf("%d", &nim);
   
    printf("Masukkan KOM    : ");
    scanf(" %c", &kom); 

    printf("Masukkan IP     : ");
    scanf("%f", &ip);
    
    //printf("Nama: %s\n", nama);
    printf("Nama: ");
    puts(nama);//menampilkan nama yang sudah diinput termasuk newline
    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP  : %.2f", ip);
    
    getchar();
}