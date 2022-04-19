#include <stdio.h>
#include <conio.h>

int is_perfect(int number);

int main()
{
   int i;

   for (i = 1; i < 10000; i++)
      if (is_perfect(i))
         printf("%d ", i);
         getch();
   return 0;
 
}
/****************************************/
int is_perfect(int number)
{
   int total = 0;
   int i;

   for (i = 1; i <= number / 2; i++)
      if (number % i == 0)
         total += i;
   return total == number;
} 

