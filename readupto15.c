/* WAP to read integers until user enters a negative integer or number of integers read reaches 15 */

#include<stdio.h>

int main()
{
    int n, i;

    for(i=0;i<15;i++)
    {
        printf("\nENTER A VALUE: ");
        scanf("%d", &n);
        if(n<0)
            break;
    }
    return 0;
}
