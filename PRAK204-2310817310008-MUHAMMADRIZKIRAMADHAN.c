#include <stdio.h>

int main(){
    float radius, tinggi, phi, volume1, luas1, keliling1, volume2, luas2, keliling2;
    phi = 22.00/7.00;

    printf(" ");
    scanf("%f %f", &radius, &tinggi);
    volume1     = phi*radius*radius*tinggi;
    luas1       = 2*phi*radius*(radius+tinggi);
    keliling1   = 2*phi*radius;

    printf("Volume   = %.2f\n", volume1);
    printf("Luas     = %.2f\n", luas1);
    printf("Keliling = %.2f\n", keliling1);

    printf(" ");
    scanf("%f %f", &radius, &tinggi);
    volume2     = phi*radius*radius*tinggi;
    luas2       = 2*phi*radius*(radius+tinggi);
    keliling2   = 2*phi*radius;

    printf("Volume   = %.2f\n", volume2);
    printf("Luas     = %.2f\n", luas2);
    printf("Keliling = %.2f\n", keliling2);

    return 0;
}