#include<stdio.h>
int main(){
    int a,b; //a>b
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    //Now

    // int q = a/b;
    // int r = a - (b*q);
    int r = a%b;

    printf("The value of remainder when %d is divided by %d is : %d",a,b,r);
    return 0;
}