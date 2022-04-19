#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
	int i=rand()%10+1;
	printf("%d\n",rand());
	getch();
}
