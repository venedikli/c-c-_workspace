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

// Buradaki b, seride a'dan sonra gelen sayýdýr. Döngü her
// döndüðünde ilk olarak a'nýn deðerini ekrana yazýyor. Daha
// sonra a ve b'nin kendilerinden bir sonraki terimleri
// göstermesini saðlanarak, seri üzerinde ilerleniyor.

      c = a + b;
      a = b;
      b = c;
   }

   printf ("\n");
   getch();
   return 0;
  
} 

