/*A�a��daki programda do-while d�ng�s� kullan�larak */
/*1 ile 5 aras�ndaki say�lan�n kareleri ve k�pleri hesaplanmaktad�r.*/
#include <stdio.h>
#include <conio.h>
main()
{
    int i;
	i=0;
	printf("SAYI\tKARES�\tKUPU\n");
	printf("----\t------\t----\n");
    do
    {
		i++;
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
   while (i<10) ;
getch();
}
