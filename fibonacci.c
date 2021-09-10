// WAP To print the fibonacci series upto limit

#include<stdio.h>

int main()
{
    int a=0, b=1, c, i, lim; 
    printf("\nENTER LIMIT: ");
    scanf("%d", &lim);

    printf("\nFIBONACCI SERIES: ");
    printf("%d %d ", a, b);

    for(i=0;i<lim;i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d ", c);
    }

    return 0;
}
