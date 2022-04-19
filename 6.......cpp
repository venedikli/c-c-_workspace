#include <stdio.h>
#include <conio.h>
main()
{
   	int a[10],i;
    int *pa;
    pa=a;
    for(i=0; i<5; i++)
       {
      	  printf("%d. Sayiyi giriniz: ",i+1);
          scanf("%d", &a[i]);
   	   }
    printf("\n");
    for(i=0; i<5; i++)
         printf ("%d. sayi : %d\n", i+1, *pa++);
         
        getch();
         
}
