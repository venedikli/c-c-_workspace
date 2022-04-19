/*Aþaðýdaki programda, fonksiyonlar kullanýlarak bir iþyerinde çalýþan iþçilerin*/
/*ücretleri hesaplanmakta ve bunlarla ilgili yazma ve okuma iþlemleri yapýlmaktadýr*/
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>

int menu(int);
void giris();
void okuma();

char ad[5][80]; 
char tel[5][20];
int saat[5];
long maas[5];

int main()
{
    int sec;
	do
	{	sec=menu(sec);
		switch(sec)
		{	case 0: break;
			case 1: giris(); break;
			case 2: okuma(); break;
			default: printf("Yeniden deneyiniz");
		}
	}
	while(sec!=0);
}


int menu(int i)
{	char str[80];
	printf("\n"); 
	printf("0 - Cikis\n");
	printf("1 - Bilgi Girisi\n"); 
	printf("2 - Bilgi Okuma\n"); 
	printf ("\nSeciminizi giriniz:");
	gets(str);
	i = atoi(str);
	return i;
}

void giris()
{	int i;
	char temp[80];
	for(i=0; i<3; i++)
	{	printf("\n") ;
		printf("Iscinin adini giriniz :"); 
		gets(ad[i]);
		printf("Telefon numarasini giriniz :"); 
		gets(tel[i]);
		printf("Calisilan saat sayisini giriniz :"); 
		gets(temp);
		saat[i]=atoi(temp); 
		printf("Saat ucretini giriniz :"); 
		gets(temp);
		maas[i]=atoi(temp);
	}
}

void okuma()
{	int i;
	for(i=0; i<3; i++)
	{	printf("\n") ;
		printf("Adi : %s Telefon no : %s\n", ad[i],tel[i]);
		printf ("Haftalik odeme: %d\n",maas[i]*saat[i]);
	}
}

//Bu programdaki atoi() fonksiyonu
//char tipi deðiþkene aktarýlmýþ olan bir sayýyý integer tipine çevirmektedir.
