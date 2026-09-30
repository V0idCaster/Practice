#include <stdio.h>

int main (){

    float r;
    printf("Enter the Radius of the Sphere : ");
    scanf("%f",&r);

    float volume = (4.0/3.0)*3.14159265*r*r*r;
    printf("volume of the Sphere is %f",volume);
    return 0;
}