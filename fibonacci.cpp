#include <stdio.h>
#include <conio.h>

int main ()
{
int a, b, c, i;

   a = 1;
   b = 1;

   for (i = 1; i <= 20 ;i ++)
   {
      printf (" %d", a);

// Buradaki b, seride a'dan sonra gelen say�d�r. D�ng� her
// d�nd���nde ilk olarak a'n�n de�erini ekrana yaz�yor. Daha
// sonra a ve b'nin kendilerinden bir sonraki terimleri
// g�stermesini sa�lanarak, seri �zerinde ilerleniyor.

      c = a + b;
      a = b;
      b = c;
   }

   printf ("\n");
   getch();
   return 0;
  
} 

