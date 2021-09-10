#include<stdio.h>

int main(){
    char operator;
    double first, second;
    printf("\nENTER OPERATOR: ");
    scanf("%c", &operator);

    printf("\nENTER OPERANDS: ");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
        case '+': printf("\nSUM = %3.2lf", first + second); break;
        case '-': printf("\nDIFFERENCE = %3.2lf", first - second); break;
        default: printf("TRY AGAIN");
    }
    return 0;
}
