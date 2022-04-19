#include<stdio.h>
#include<conio.h>
int main()
{
     int number,sum;
     printf("number        sum\n");
     for(number=1,sum=0;number<=99;number++)
     {
        sum=sum+number;
        printf("  %d           %d\n",number,sum);                                 
     }
     
     getch();
}