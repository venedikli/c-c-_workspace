/* ÝSME GÖRE ARAMA YAPAN PROGRAM */

#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{	char ad[50][10];
	char ara[10];
	int i, j, no[50];
	char cevap = 'e';

	for(i=0;i<5;i++)/*isim ve numaralarýn girildiði blok */
	{
		printf("%d. kisinin adini giriniz:",i+1);
		scanf("%s", ad[i]);
		printf("%d. kisinin numarasini giriniz:",i+1);
		scanf ("%d", &no[i]);
		printf("\n");
	}

	while(cevap == 'e')
	{
       	j=0;
		printf("Aradiginiz kisinin adini giriniz:");
		scanf("%s",ara);
		printf("\n");
		for(i=0;i<5;i++)	/* ismin arandýðý blok */
			if (strcmp(ara, ad[i])==0)
			{	j=1;
				printf("Adi: %s Numarasi: %d\n",ad[i], no[i]);
			}
		if(j==0)
           printf("Aradiginiz isim bulunamadi..\n\n"); 
		printf("Arama islemine devam edecek misiniz (e/h):"); 
		cevap = getche();
		printf("\n\n");
	}
	
	
	getch();
}	
