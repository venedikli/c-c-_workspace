#include <stdio.h>
#include <conio.h>
int main()
{
 	int sayi,ters;
	  printf("bir sayi giriniz...");
	  scanf("%d",&sayi);
	 while(sayi!=0)
	 {
	  ters=sayi%10;
 	  printf("%d",ters);
      sayi=sayi/10;
	  }
 	getch();
 	return 0;
}
