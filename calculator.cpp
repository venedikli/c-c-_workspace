#include<stdio.h>


int main()
{
	/*
	int sayi,sayi2,toplam,cikar,carp;
	float bolme;
	char islem;
	printf("lutfen yapmak istedginiz islemi secin\n");
	printf("(+)toplama (-)cikarma (*)carpma (/)bölme :\n");
	scanf("%c",&islem);
	printf("lutfen 2 sayi girin");
	scanf("%d%d",&sayi,&sayi2);
	switch(islem){
	
	case '+':
		printf("toplama iþlemi sectiniz");
		toplam=sayi+sayi2;
		printf("sonuc :%d\n",toplam);

	break;

case '-':
	printf("cikarma iþlemi sectiniz");
		cikar=sayi-sayi2;
		printf("sonuc :%d\n",cikar);

		break;
case '*':
	printf("carpma iiþlemi seçtiniz");
carp=sayi*sayi2;
printf("sonuc :%d\n",carp);

break;
case '/':
	printf("bölme iþlemi sectiniz");
bolme=sayi/sayi2;	
printf("sonuc :%f\n",bolme);
break;
}


int sayi,a,b;
printf("lutfenk iki bas bir sayi girin");
scanf("%d",&sayi);
a=sayi/10;
b=sayi%10;
switch(a)
{
	case 1:
		printf("on ");
		break;
		case 2:
		printf("yirmi ");
		break;
			case 3:
		printf("otuz ");
		break;
			case 4:
		printf("kirk ");
		break;
			case 5:
		printf("elli ");
		break;
			case 6:
		printf("altmiþ ");
		break;
			case 7:
		printf("yetmiþ ");
		break;
			case 8:
		printf("seksen ");
		break;
			case 9:
		printf("doksan ");
		break;
}
switch(b)
{
	case 1:
	printf("bir");
	break;
	case  2:
		printf("iki");
		break;
		case 3:
			printf("uc");
			break;
			case 4:
				printf("dort");
				break;
				case 5:
					printf("bes");
					break;
					case 6:
						printf("alti");
						break;
						case 7:
	printf("yedi");
	break;
		case 8:
	printf("sekiz");
	break;
		case 9:
	printf("dokuz");
	break;
}


*/


int gun,a,b,c;

printf("lutfen gun giriniz (1-3)");
scanf("%d",&gun);
a=5;b=8;c=9;
switch(gun)
{
	case 1:
		printf("pazartesi");
		printf("%d",a);
		break;
			case 2:
		printf("sali");
		printf("%d",a+b);
		break;
			case 3:
		printf("carsamba");
		printf("%d",a+b+c);
		break;
}



}
