
 /**************************************************************************

  A C++ program to convert a decimal noumber into binary, octal and pental
  code ( using arrays and functions with return type).


  *************************************************************************/


 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>


 long binary_code(int);
 double pental_code(int);
 double octal_code(int);



 main()
    {

       clrscr();

       int number;

       cout<<"\n ********** Decimal Number *********"<<endl;
       cout<<"\n For binary numbers ,enter from( 0 ---> 1023 ) "<<endl;

       cout<<"\n\n Enter the Decimal number = ";
       cin>>number;

       cout<<"\n ********** Binary Number **********"<<endl;
       cout<<"\t Binary Number = "<<binary_code(number)<<endl;

       cout<<"\n *********** Pental Code ***********"<<endl;
       cout<<"\t Pental Code = "<<pental_code(number)<<endl;

       cout<<"\n *********** Octal Code ************"<<endl;
       cout<<"\t Octal Code = "<<octal_code(number)<<endl;

       getch();
       return 0;
    }


 //---------------------------  binary_code(int)  ------------------------//


 long binary_code(int number)
    {
       int count=0;
       int resulting_array[25];
       int remainder;
       int qutiont;
       int size=0;

       long binary_number=0;
       long sum=0;
       long base=1;

       while(number>0)
	  {
	     qutiont=number/2;
	     remainder=number%2;
	     number=qutiont;
	     resulting_array[count]=remainder;

	     size++;
	     count++;
	  }

       for(int j=0;j<size;j++)
	  {
	     sum=resulting_array[j]*base;
	     base=base*10;
	     binary_number+=sum;
	  }

       return binary_number;
    }


 //---------------------------  pental_code(int)  ------------------------//

 double pental_code(int number)
    {
       int count=0;
       int resulting_array[25];
       int remainder;
       int qutiont;
       int size=0;

       double pental_number=0;
       double sum=0;
       double base=1;

       while(number>0)
	  {
	      qutiont=number/5;
	      remainder=number%5;
	      number=qutiont;
	      resulting_array[count]=remainder;

	      size++;
	      count++;
	  }

       for(int j=0;j<size;j++)
	  {
	     sum=resulting_array[j]*base;
	     base=base*10;
	     pental_number+=sum;
	  }
       return pental_number;
    }


 //----------------------------  octal_code(int)  ------------------------//

 double octal_code(int number)
    {
       int count=0;
       int resulting_array[25];
       int remainder;
       int qutiont;
       int size=0;

       double octal_number=0;
       double sum=0;
       double base=1;

       while(number>0)
	  {
	      qutiont=number/8;
	      remainder=number%8;
	      number=qutiont;
	      resulting_array[count]=remainder;

	      count++;
	      size++;
	  }

       for(int j=0;j<size;j++)
	  {
	     sum=resulting_array[j]*base;
	     base=base*10;
	     octal_number+=sum;
	  }
       return octal_number;
    }


