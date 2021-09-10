/* Program to read user input 15 times and return sum of only the positive numbers */
#include<stdio.h>

int main()
{
    int n, i, sum = 0;

    for(i=0;i<15;i++)
    {
        printf("\nENTER VALUE: ");
        scanf("%d", &n);
        if(n<0)
            continue;
        sum += n;
    }
    printf("\nSUM OF ALL POSITIVE INTEGERS: %d", sum);
    return 0;
}
