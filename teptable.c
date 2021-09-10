#include<stdio.h>

// Temperature Table, floating point edition
int main(){
    float fahr, cel;
    int lower = 0, step = 20, upper = 300;

    for(fahr = lower; fahr<=upper; fahr += step)
    {
        cel = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f, %6.1f \n", fahr, cel);
    }

    return 0;
}
