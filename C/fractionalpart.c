#include<stdio.h>
int main(){
    float a;
    printf("Enter the decimal number: ");
    scanf("%f",&a);
    int b;
    b=a;
    float c = (a-b);
    printf("fractional part of this number %f is : %f", a,c);

    return 0;
}