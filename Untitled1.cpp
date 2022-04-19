#include<stdio.h>
#include<conio.h>
main()
{
      float a=4.5,b=9.5,c=3.4,d=4.2;
      if(a>=b)
        if(a>=c)
          if(a>=d)
            printf("\n a=%f",a);
          else
           printf("\n d=%f",d);
          else
           if(c>=d)
             printf("\n c=%f",c);
          else
            printf("\n c=%f",c);
        printf("\n b=%f",b);
        printf("\n sonuc=%d",5<6);
        getch();
}              