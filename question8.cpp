#include <stdio.h>
#include <conio.h>
#define PC(X,Y) printf("%c %c\n",X,Y);
char ref[]={'D','O','L','T'};
int main()
{
 	char*ptr;
 	int index;
 	for(index=0,ptr=ref;index<4;index++,ptr++)
 	PC(ref[index],*ptr);
 	getch();
 	return 0;
 	
} 	
