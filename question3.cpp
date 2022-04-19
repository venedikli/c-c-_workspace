#include <stdio.h>
#include <conio.h>
int main()
{
 	int n,m;
 	for(n=0;n<8;n++)
 	{
	  printf("%d",n);
	  switch(n%3)
	  {
	   	case 0:printf("H");
		case 1:printf("E");
        break;
        case 2:printf("\n");
      }
    }
 	printf("\n***\n");
 	for(n=1,m=5;n<m;n*=2,m+=2)
 	printf("%d %d\n",n,m);
 	getch();
 	return 0;
}
