/* WAP that checks whether a number is prime or not */

#include<stdio.h>

int main()
{
    int n, i, flag = 0;

    printf("\nENTER A NUMBER TO CHECK WHETHER PRIME OR NOT: ");
    scanf("%d", &n);

    for(i=0; i<=n/2; i++)
    {
        if(i%2==0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("\nNUMBER IS PRIME");
    else
        printf("\nNUMBER IS COMPOSITE");
    return 0;
}
