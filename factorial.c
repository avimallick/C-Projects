/* WAP to find a factorial of a given number */

#include<stdio.h>

int main()
{
    unsigned int n, i, fact = 1;

    printf("\nENTER A POSITIVE NUMBER: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }

    printf("\nFACTORIAL OF THE VALUE ENTERED: %d", fact);
    return 0;
}
