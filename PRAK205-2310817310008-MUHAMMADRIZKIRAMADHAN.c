#include <stdio.h>
#include <math.h>

int main(){
    int A1, B1, A2, B2, alas1, keliling1, luas1, alas2, keliling2, luas2;

    printf(" ");
    scanf("%d %d", &A1, &B1);
    alas1     = sqrt(B1*B1-A1*A1);
    keliling1 = A1+B1+alas1;
    luas1     = 0.5*alas1*A1;

    printf("Alas     = %d cm\n", alas1);
    printf("Tinggi   = %d cm\n", A1);
    printf("Keliling = %d cm\n", keliling1);
    printf("Luas     = %d cm^2\n", luas1);

    printf(" ");
    scanf("%d %d", &A2, &B2);
    alas2     = sqrt(B2*B2-A2*A2);
    keliling2 = A2+B2+alas2;
    luas2     = 0.5*alas2*A2;

    printf("Alas     = %d cm\n", alas2);
    printf("Tinggi   = %d cm\n", A2);
    printf("Keliling = %d cm\n", keliling2);
    printf("Luas     = %d cm^2\n", luas2);

    return 0; 
}