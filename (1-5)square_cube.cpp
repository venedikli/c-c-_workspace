/*Aşağıdaki programda do-while döngüsü kullanılarak */
/*1 ile 5 arasındaki sayılanın kareleri ve küpleri hesaplanmaktadır.*/
#include <stdio.h>
#include <conio.h>
main()
{
    int i;
	i=0;
	printf("SAYI\tKARESİ\tKUPU\n");
	printf("----\t------\t----\n");
    do
    {
		i++;
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
   while (i<10) ;
getch();
}
