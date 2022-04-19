/*Aþaðýdaki programda do-while döngüsü kullanýlarak */
/*1 ile 5 arasýndaki sayýlanýn kareleri ve küpleri hesaplanmaktadýr.*/
#include <stdio.h>
#include <conio.h>
main()
{
    int i;
	i=0;
	printf("SAYI\tKARESÝ\tKUPU\n");
	printf("----\t------\t----\n");
    do
    {
		i++;
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
   while (i<10) ;
getch();
}
