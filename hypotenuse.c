#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    int k1, k2;
    float hypotenuse;

    printf(" Enter two perpendicular sides : ");
    scanf("%d%d", &k1, &k2);

    hypotenuse=sqrt(k1*k1 + k2*k2);
    printf(" Hypotenuse : %.2f", hypotenuse);
    return 0;
}