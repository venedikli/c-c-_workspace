/* küçük harfle girilen bir kelimeyi BÜYÜK harflerle ekrana yazan program */
#include <stdio.h>	
#include <ctype.h>
#include <conio.h>
main()
{	
  char a[20];
  int i;
  printf("Kucuk harflerle bir sozcuk yaziniz: \n");
  scanf("%s", a);
   for (i=0; a[i]!= '\0' ; i++)
    a[i]= toupper(a[i]);
    printf("%s\n", a);
    
    getch();
}
