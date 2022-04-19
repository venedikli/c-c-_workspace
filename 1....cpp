/*Aþaðýdaki programda, klavyeden 5 isim girilmekte*/
/*daha sonra bu isimler görüntülenmektedir*/
#include <stdio.h>
#include <conio.h>

main()
{
   char ad[50][10]; 
   int i;
     for(i=0; i<5; i++)
        {
          printf("%d. kisinin adini giriniz:",i+1); 
          scanf ("%s\n", ad[i]);
	    }
   for (i=0;i<5; i++)
        printf("%s\n",ad[i]);
    
    getch();
}

