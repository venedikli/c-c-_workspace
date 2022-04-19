#include <stdio.h>
#include <conio.h>
int main()
{
    int i, odd_sum = 0, even_sum = 0;

    for(i = 1; i <= 100; i++)
        if ((i % 2) == 0)
            even_sum += i;
        else
            odd_sum += i;
    printf("Tek sayilar=%d\n", odd_sum);
    printf("Cift sayilar=%d\n", even_sum);
    getch();
    
}
