#include <stdio.h> 
#include <conio.h> 

main()
{
  	 int a,b,c,i;
     printf("Birinci sayiyi giriniz: "); 
     scanf("%d", &a);
     printf("Ikinci sayiyi giriniz: ");
     scanf("%d",&b);
     printf("\n\n") ;
     printf("MENU\n");
	 printf("==========\n");
     printf("1-Toplama\n");
     printf("2-Cikarma\n");
     printf("3-Carpma\n");
     printf("\n") ;
	 printf("Tercihinizi giriniz (1/2/3): ");
	 scanf("%d",&i);
     printf("\n");
      if(i==1)
        {
       	 c=a+b;
         printf("Toplam :%d\n",c);
        }
     if(i==2)
        {
       	  c=a-b;
          printf("Fark :%d\n",c);
        }
    if(i==3)
       {
      	  c=a*b;
          printf("Carpim :%d\n",c);
       }
       
   
     getch();
}
