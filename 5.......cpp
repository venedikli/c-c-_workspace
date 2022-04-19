/*Dizi elemanlarýnýn bellekteki sýralanýþ adresleri*/
#include <stdio.h>
#include <conio.h>
main()
{
    int i,x[10];
  	puts("x dizisinin elemanlarinin siralanisi");
   	  for(i=0;i<10;i++)
    printf("%p\n",&x[i]);
    	 
    getch();
}

