#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
struct kimlik {int t;int y;int b;};
main()
{  kimlik d[2];
int i,j=1;

  for(i=0;i<2;i++)
   {
     printf("t.%d : ",j);
     scanf("%s",&d[i].t);
     cout<<"y."<<j<<":";
     scanf("%s",&d[i].y);
     cout<<"b."<<j<<" : ";
     scanf("%d",&d[i].b);
     j++;
   }

   for(i=0;i<2;i++)
     printf("t:%d y: %d b : %d",d[i].t,d[i].y,d[i].);





  getch();
 }
