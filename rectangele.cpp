#include<stdio.h>
#include<stdlib.h>

//girilen 3 sayinin hangi 3gen oldugunu bulma....

int main()
{
	int gecerli_ucgen,dik_ucgen,eskenar_ucgen,ikizkenar_ucgen;
	float sayi1,sayi2,sayi3;
		printf("lutfen uc kenar uzunlugu giriniz :\n");
	
	scanf("%f%f%f",&sayi1,&sayi2,&sayi3);
	//gecerli ucgen tanimla:
	gecerli_ucgen=sayi1<sayi2+sayi3 && sayi2<sayi1+sayi3 && sayi3<sayi1+sayi2;
		//dik ucgen tanimla:
		dik_ucgen=sayi1*sayi1==sayi2*sayi2+sayi3*sayi3 || 
		sayi2*sayi2==sayi1*sayi1+sayi3*sayi3 ||
		sayi3*sayi3==sayi1*sayi1+sayi2*sayi2;
		//eskenar ucgen tanýmla:
		eskenar_ucgen=sayi1==sayi2==sayi3;
		//ikikzkenar ucgen tanimla:
		ikizkenar_ucgen=sayi1==sayi2 || sayi1==sayi3 || sayi2==sayi3;
		if(gecerli_ucgen)
		{
			printf("bu gecerli bir ucgendir\n");
			
		}
		else
		{
		
		printf("bu gecerli bir ucgen degildir");
		return 0;
	}
	
	if(dik_ucgen)
	{
		printf("bu bir dik ucgendir");
	}else if(eskenar_ucgen)
	{
		printf("bu bir eskenar ucgendir");
		
	}else if(ikizkenar_ucgen)
	{
		printf("bu bir ikizkenar ucgendir");
	}else
	{
		printf("bu bir cesitkenar ucgendir");
	}
	return 0;
		
}
