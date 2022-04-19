#include <stdio.h>
#include <conio.h>
int main()
{
 	int u,v,temp;
 	printf("Type in two nonnegative integers.\n ");
 	scanf("%d %d",&u,&v);
 	while(v!=0)
 	{
       temp=u%v;
       u=v;
       v=temp;
       
    }
    printf("%d",u);
    getch();
    return 0;
}
