/* Bu program klavyeden girilen 5 sayýyý büyükten küçüðe doðru sýralar */
#include <stdio.h>
#include <conio.h>
main()
{	int a[5], i, j, gec;
    puts("5 tane sayi giriniz:");
    for(i=0;i<5;i++)
     {	printf("%d. sayi: ",i+1);
      	scanf("%d", &a[i]);
     }
	 for(i= 0;i<4;i++)
   		for(j=i+1; j<5; j++)
       	{	if(a[j] > a[i])
       		{	gec = a[i];
          		a[i] = a[j];
          		a[j] = gec;
	 		}
   		}
       printf("\nSayilarin siralanisi:\n");
   	 for(i=0;i<5;i++)
   	   printf("%d. Sayi: %d\n",i+1, a[i]);
    	
    	getch();
}
