2/*Ýki matrisin toplamý*/
#include <stdio.h>
#include <conio.h>
main()
{
    int i,j,A[3][3],B[3][3],C[3][3];
    puts("iki matrisin toplami:");
    puts("A matrisinin elemanlarini giriniz:");
    for(i=0;i<3;i++)
       {
    	 for(j=0;j<3;j++)
           {
        	printf("A(%d,%d)=",i+1,j+1);
	     	scanf("%d",&A[i][j]);
           }
   	   }
    puts("B matrisinin elemanlarini giriniz:");
   	for(i=0;i<3;i++)
       {
    	for(j=0;j<3;j++)
           { 
        	printf("B(%d,%d)=",i+1,j+1);
	    	scanf("%d",&B[i][j]);
      	   }
   	   }
   	puts("A+B matrisinin elemanlari:");
   	for(i=0;i<3;i++)
       {
    	for(j=0;j<3;j++)
           {
       		C[i][j] = A[i][j] + B[i][j];
        	printf("C(%d,%d)=%d\n",i+1,j+1,C[i][j]);
    	   }
   	   }
   	   getch();
}
