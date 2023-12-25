#include <stdio.h>

int main(){
    float a, b, i, j, x, y;
    
    printf(" ");
    scanf("%f %f %f %f %f %f", &a ,&b , &i, &j, &x, &y );
    float hasil1 = ((a-b)*(i/j)-(x+y));
    printf("%.3f\n", hasil1);

    printf(" ");
    scanf("%f %f %f %f %f %f", &a ,&b, &i, &j, &x, &y);
    float hasil2 = ((a-b)*(i/j)-(x+y));
    printf("%.3f", hasil2);

    return 0;
}