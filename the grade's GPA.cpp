#include<stdio.h>
#include<conio.h>
//bir sýnýfýn not ortalamasýný bulan program...
int main()
{
	int ogr_sayi,i,not1,toplam_not=0;
	float ortalama;
	
	printf("lutfen sinifin kac kisi oldugunu soyleyiniz");
	scanf("%d",&ogr_sayi);
	for(i=1;i<=ogr_sayi;i++)
	{
		printf("%d . kisinin notunu girin :\n ",i);
		scanf("%d",&not1);
		toplam_not=toplam_not+not1;
		
	}
	ortalama=toplam_not/ogr_sayi;
	printf("not ortalamasi :%.2lf\n",ortalama);
	
	
	getch();
	
	return 0;
}
