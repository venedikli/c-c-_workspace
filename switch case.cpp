#include<stdio.h>
#include<stdlib.h>



int main()
{
	int sayi;
	printf("lütfen bir sayi girin?");
	scanf("%d",&sayi);
	if(1>sayi || sayi>7)
	{
		printf("lutfen 1-7 arasinda sayi girin");
		return 0;
	}
	
	
	switch(sayi)
	{
		case 1:
			printf("pazartesi");
			break;
				case 2:
			printf("sali");
			break;
				case 3:
			printf("carsamba");
			break;
				case 4:
			printf("perþembe");
			break;
				case 5:
			printf("cuma");
			break;
				case 6:
			printf("cumartesi");
			break;
				case 7:
			printf("pazar");
			
		break;
			
	}
}
