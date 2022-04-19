#include<stdio.h>
#include<conio.h>


main(void){
     int x,y;
     char ch;
     
//     for(x=0;x<256;x++)
//         {
//             ch=x;
//             printf("%c : %d \n",ch,x);
//         }
     ch=getch();
     
     if(ch>=48&&ch<58)
           printf("%c : Bu bir rakamdir",ch);
     else if((ch>=65&&ch<90) ||  (ch>=97&&ch<123))
           printf("%c : Bu bir harfdir",ch);   
     else
           printf("%c : Bu bir ozel karakterdir",ch);   

     getch();
     return 0;
}