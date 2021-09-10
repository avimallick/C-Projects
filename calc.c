#include<stdio.h>

int main(){
    double a, b;
    char operator;
    printf("\nENTER OPERANDS: ");
    scanf("%lf %lf", &a, &b);
    printf("\nENTER OPERATOR: ");
    scanf("%c", &operator);

    switch (operator){
        case '+': printf("SUM = %lf", a+b); break;
        case '-': printf("DIFFERENCE = %lf", a-b); break;
        case '*': printf("PRODUCT = %lf", a*b); break;
        case '/': printf("QUOTIENT = %lf", a/b); break;
        default: printf("SORRY WRONG OPERATOR");
    }
    return 0;
}
