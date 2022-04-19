#include <stdio.h>
#include <conio.h>
#define TWO 2
#define MSG "The old gray catsang a merry song. "
#define FOUR TWO*TWO
#define PX printf("x is %d.\n,x")
#define FMT "x is %d.\n"
int main()
{
 	int x=TWO;
 	PX;
 	x=FOUR;
 	printf("FMT,x");
 	printf("%s\n",MSG);
 	printf("TWO:MSG\n");
 	getch();
 	return 0;
 	
}
