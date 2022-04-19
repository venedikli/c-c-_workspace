#include <stdio.h>
#include <conio.h>

int main()
{
            int h,i,j,loop_up,loop_down;
            printf("enter the height of the sand watch\n");
            scanf("%d",&h);
 
            loop_up=h;
            loop_down=h;
 
            while(loop_up>0)
            {
                        for(j=0;j<(h-loop_up);j++)
                                   printf(" ");
 
                        for(i=(2*loop_up-1);i>0;i--)
                                   printf("*");
 
                        printf("\n");
 
                        loop_up--;
            }
 
            while(loop_down>0)
            {
                        for(i=(loop_down-1);i>0;i--)
                                   printf(" ");
 
                        for(j=0;j<2*(h-loop_down)+1;j++)
                                   printf("*");
 
                        printf("\n");
 
                        loop_down--;
                        
            }
            getch();
 
            return 0;
}
