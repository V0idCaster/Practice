#include <stdio.h>

int main(){

    int Principal,rate,time,SI;

    printf("Enter the Principal: ");
    scanf("%d",&Principal);

    printf("Enter the rate: ");
    scanf("%d",&rate);

    printf("Enter the time: ");
    scanf("%d",&time);

    SI = (Principal*rate*time)/100;
    printf("Your simple interst is : %d",SI);

    return 0;

}