#include<stdio.h>
#include<conio.h>
 interchange(u,v)
 int *u,*v;
 {
   int temp;
   temp=*u;
   *u=*v;
   *v=temp;
  }

  main()
{
    int x=5,y=10;
    printf("Orginally x=%d and y=%d.\n",x,y);
    interchange(&x,&y);
    printf("Now x=%d and y=%d.\n",x,y);

  getch();

}