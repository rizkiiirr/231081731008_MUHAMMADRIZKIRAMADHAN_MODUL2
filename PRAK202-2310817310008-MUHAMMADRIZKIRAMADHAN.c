#include <stdio.h>

int main(){
    float nilai1, nilai2, hasil1, hasil2;
    
    printf("Test case ke 1:\n");
    printf("Masukkan Nilai Pertama :");
    scanf ("%f", &nilai1);
    printf("Masukkan Nilai Kedua   :");
    scanf ("%f", &nilai2);

    hasil1 = nilai1 + nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" \n\n", nilai1, nilai2, hasil1);
   
    printf("Test case ke 2:\n");
    printf("Masukkan Nilai Pertama :");
    scanf ("%f", &nilai1);
    printf("Masukkan Nilai Kedua   :");
    scanf ("%f", &nilai2);

    hasil2 = nilai1 + nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" ", nilai1, nilai2, hasil2);
   
    return 0;
}