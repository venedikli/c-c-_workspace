#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{int x,a,b;
char ch;

do{
srand(time(NULL));
x=1+rand()%1000;
printf("\t1-1000 arasinda bir sayi tuttum\n");
printf("\tTahmin edebilir misin?\n");

while(1)
{printf("\tLutfen ilk tahminini gir: ");
scanf("%d",&a);
if(a==x)
{ printf("\tMukemmel bildiniz!!\n");

printf("\tTekrar Denemek istermisin(E or H):");
getchar();
scanf("%c",&ch);
break;
}
else if(a<x)
{printf("\tCok kucuk.Tekrar deneyiniz\n");
continue;
}
else if(a>x)
{printf("\tCok buyuk.Tekrar deneyiniz\n");
continue;
}
}

}
while(ch=='e'||ch=='E');

getchar();
getchar();
return(0);
}
