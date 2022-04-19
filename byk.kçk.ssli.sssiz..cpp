#include <stdio.h>
#include <conio.h>
main()
{
      	char a;
        printf("Bir harf giriniz: ");
        a=getchar();
        switch(a)
         {
        	case 'A':
            case 'E':
            case 'I':
            case 'U':
              printf("buyuk, ");
              printf("sesli harf...\n");
              break;
            case 'a':
            case 'e':
            case 'i':
            case 'u':
              printf("kucuk, ");
              printf("sesli harf...\n");
              break;
           default:
              printf("sessiz harf...\n");
              break;
    	}
    	
    	getch();
}
