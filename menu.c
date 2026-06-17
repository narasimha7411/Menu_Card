#include<stdio.h>
int main(){
    char op;
    printf("*********** Welcome to my Hotel ***********\n\n");
    printf("Select what u want ---> \n");
    printf("1.stater\n2.Main course\n3.Dessert\n4.exit");

    scanf("%c",&op);

    switch(op)
    {
        case '1':
            printf("you have choosed stater\n");
            printf("1.chicken 65\n2.paneer\n3.pastha");
            break;
        case '2':
            printf("you have choosed Main course\n");
            printf("1.biryani 65\n2.paneer\n3.pastha");
            break;
        case '3':
            printf("you have choosed Dessert\n");
            printf("1. 65\n2.paneer\n3.pastha");
            break;
        case '4':
            printf("Thank you visit agiain\n");
            break;
        default:
            printf("try again");
    }
    return 0;
}