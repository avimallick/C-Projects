#include<stdio.h>

int main()
{
    int n;
    do{
        printf("\nENTER A VALUE: ");
        scanf("%d", &n);
    }while(n<=0);

    printf("\nVALUE IS: %d", n);
    return 0;
}
