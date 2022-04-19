
 /**************************************************************************
  **************************************************************************

  A C++ Program to covert a given decimal number into Roman Code.

  **************************************************************************
  *************************************************************************/


 # include <iostream.h>
 # include <iomanip.h>
 # include <conio.h>
 # include <math.h>


 void roman_code(long int);

 main( )
    {
       clrscr( );

       double number;

       cout<<"\n******************************************************************************"<<endl;
       cout<<"******************************************************************************"<<endl;
       cout<<"------------------------------------------------------------------------------"<<endl;
       cout<<"\n******  Conversion of a number from Decimal Number System to Roman Code  *****"<<endl;
       cout<<"\n------------------------------------------------------------------------------"<<endl;
       cout<<"******************************************************************************"<<endl;
       cout<<"******************************************************************************"<<endl;

       gotoxy(1,22);
       cout<<"------------------------------------------------------------------------------"<<endl;
       cout<<"******************************************************************************"<<endl;
       cout<<"******************************************************************************";

       gotoxy(1,10);
       cout<<"\n\n ***  Enter the Decimal Number from ( -1000,0,00,000 --> +1000,0,00,000 )  ***\n\n\n"<<endl;
       cout<<setw(21)<<"Decimal Number ::  ";
       cin>>number;

       if(number==0)
	  cout<<"\n\n  Error ::  The given Decimal Number doesn't exists in Roman Number System.";

       else if((number>1000000000) || (number<-1000000000))
	  cout<<"\n\n  Error ::  The given Decimal Number is out of range.";

       else
	  {
	     cout<<"\n\n  Roman Code  ::   "<<endl;

	     gotoxy(19,19);
	     roman_code(number);
	  }

       getch( );

       return 0;
    }


 //-----------------------  roman_code(long int)  ------------------------//

 void roman_code(long int number)
    {
       long number_1;
       long number_2;
       long number_3;
       long number_4;
       long number_5;
       long number_6;
       long number_7;
       long number_8;
       long number_9;
       long number_10;
       long number_11;
       long number_12;
       long number_13;
       long number_14;
       long number_15;
       long number_16;
       long number_17;
       long number_18;

       number_1=fabs(number);
       number_2=number_1%1000000000;
       number_3=number_2/100000000;
       number_4=number_2%100000000;
       number_5=number_4/10000000;
       number_6=number_4%10000000;
       number_7=number_6/1000000;
       number_8=number_6%1000000;
       number_9=number_8/100000;
       number_10=number_8%100000;
       number_11=number_10/10000;
       number_12=number_10%10000;
       number_13=number_12/1000;
       number_14=number_12%1000;
       number_15=number_14/100;
       number_16=number_14%100;
       number_17=number_16/10;
       number_18=number_16%10;

       if(number<0)
	  cout<<"- ";

       switch(number_3)
	  {
	     case 1 : cout<<"C ";
		      break;

	     case 2 : cout<<"CC ";
		      break;

	     case 3 : cout<<"CCC ";
		      break;

	     case 4 : cout<<"CD ";
		      break;

	     case 5 : cout<<"D ";
		      break;

	     case 6 : cout<<"DC ";
		      break;

	     case 7 : cout<<"DCC ";
		      break;

	     case 8 : cout<<"DCCC ";
		      break;

	     case 9 : cout<<"CM ";
		      break;
	  }

       switch(number_5)
	  {
	     case 1 : cout<<"X ";
		      break;

	     case 2 : cout<<"XX ";
		      break;

	     case 3 : cout<<"XXX ";
		      break;

	     case 4 : cout<<"XL ";
		      break;

	     case 5 : cout<<"L ";
		      break;

	     case 6 : cout<<"LX ";
		      break;

	     case 7: cout<<"LXX ";
		     break;

	     case 8: cout<<"LXXX ";
		     break;

	     case 9: cout<<"XC ";
		     break;
	  }

       switch(number_7)
	  {
	     case 9 : cout<<"IX" ;
		      break;

	     case 8 : cout<<"VIII ";
		      break;

	     case 7 : cout<<"VII ";
		      break;

	     case 6 : cout<<"VI ";
		      break;

	     case 5 : cout<<"V ";
		      break;

	     case 4 : cout<<"IV ";
		      break;

	     case 3 : cout<<"III ";
		      break;

	     case 2 : cout<<"II ";
		      break;

	     case 1 : cout<<"I ";
		      break;
	  }

       if(number_1>999999)
	  {
	     gotoxy(24,9);
	     cout<<"_";

	     gotoxy(24,10);
	     cout<<"M ";
	  }

       switch(number_9)
	  {
	     case 1 : gotoxy(27,9);
		      cout<<"_";

		      gotoxy(27,10);
		      cout<<"C ";

		      break;

	     case 2 : gotoxy(27,9);
		      cout<<"__";

		      gotoxy(27,10);
		      cout<<"CC ";

		      break;

	     case 3 : gotoxy(27,9);
		      cout<<"___";

		      gotoxy(27,10);
		      cout<<"CCC ";

		      break;

	     case 4 : gotoxy(27,9);
		      cout<<"__";

		      gotoxy(27,10);
		      cout<<"CD ";

		      break;

	     case 5 : gotoxy(27,9);
		      cout<<"_";

		      gotoxy(27,10);
		      cout<<"D ";

		      break;

	     case 6 : gotoxy(27,9);
		      cout<<"__";

		      gotoxy(27,10);
		      cout<<"DC ";

		      break;

	     case 7 : gotoxy(27,9);
		      cout<<"___";

		      gotoxy(27,10);
		      cout<<"DCC ";

		      break;

	     case 8 : gotoxy(27,9);
		      cout<<"____";

		      gotoxy(27,10);
		      cout<<"DCCC ";

		      break;

	     case 9:  gotoxy(27,9);
		      cout<<"__";

		      gotoxy(27,10);
		      cout<<"CM ";

		      break;
	  }

       switch(number_11)
	  {
	     case 1 : gotoxy(32,9);
		      cout<<"_";

		      gotoxy(32,10);
		      cout<<"X ";

		      break;

	     case 2 : gotoxy(32,9);
		      cout<<"__";

		      gotoxy(32,10);
		      cout<<"XX ";

		      break;

	     case 3 : gotoxy(32,9);
		      cout<<"___";

		      gotoxy(32,10);
		      cout<<"XXX ";

		      break;

	     case 4 : gotoxy(32,9);
		      cout<<"__";

		      gotoxy(32,10);
		      cout<<"XL ";

		      break;

	     case 5 : gotoxy(32,9);
		      cout<<"_";

		      gotoxy(32,10);
		      cout<<"L ";

		      break;

	     case 6 : gotoxy(32,9);
		      cout<<"__";

		      gotoxy(32,10);
		      cout<<"LX ";

		      break;

	     case 7 : gotoxy(32,9);
		      cout<<"___";

		      gotoxy(32,10);
		      cout<<"LXX ";

		      break;

	     case 8 : gotoxy(32,9);
		      cout<<"____";

		      gotoxy(32,10);
		      cout<<"LXXX ";

		      break;

	     case 9 : gotoxy(32,9);
		      cout<<"__";

		      gotoxy(32,10);
		      cout<<"XC ";

		      break;
	  }

       switch(number_13)
	  {
	     case 1 : cout<<"M ";
		      break;

	     case 2 : cout<<"MM ";
		      break;

	     case 3 : cout<<"MMM ";
		      break;

	     case 4 : gotoxy(37,9);
		      cout<<"_";

		      gotoxy(37,10);
		      cout<<"MV ";

		      break;

	     case 5 : gotoxy(37,9);
		      cout<<"_";

		      gotoxy(37,10);
		      cout<<"V ";

		      break;

	     case 6 : gotoxy(37,9);
		      cout<<"_";

		      gotoxy(37,10);
		      cout<<"VM ";

		      break;

	     case 7 : gotoxy(37,9);
		      cout<<"_";

		      gotoxy(37,10);
		      cout<<"VMM ";

		      break;

	     case 8 : gotoxy(37,9);
		      cout<<"_";

		      gotoxy(37,10);
		      cout<<"VMMM ";

		      break;

	     case 9 : gotoxy(37,9);
		      cout<<"_";

		      gotoxy(37,10);
		      cout<<"MX ";

		      break;
	  }

       switch(number_15)
	  {
	     case 1 : cout<<"C ";
		      break;

	     case 2 : cout<<"CC ";
		      break;

	     case 3 : cout<<"CCC ";
		      break;

	     case 4 : cout<<"CD ";
		      break;

	     case 5 : cout<<"D ";
		      break;

	     case 6 : cout<<"DC ";
		      break;

	     case 7 : cout<<"DCC ";
		      break;

	     case 8 : cout<<"DCCC ";
		      break;

	     case 9: cout<<"CM ";
		     break;
	  }

       switch(number_17)
	  {
	     case 1 : cout<<"X ";
		      break;

	     case 2 : cout<<"XX ";
		      break;

	     case 3 : cout<<"XXX ";
		      break;

	     case 4 : cout<<"XL ";
		      break;

	     case 5 : cout<<"L ";
		      break;

	     case 6 : cout<<"LX ";
		      break;

	     case 7 : cout<<"LXX ";
		      break;

	     case 8 : cout<<"LXXX ";
		      break;

	     case 9 : cout<<"XC ";
		      break;
	  }

       switch(number_18)
	  {
	     case 9 : cout<<"IX";
		      break;

	     case 8 : cout<<"VIII";
		      break;

	     case 7 : cout<<"VII";
		      break;

	     case 6 : cout<<"VI";
		      break;

	     case 5 : cout<<"V";
		      break;

	     case 4 : cout<<"IV";
		      break;

	     case 3 : cout<<"III";
		      break;

	     case 2 : cout<<"II";
		      break;

	     case 1 : cout<<"I";
		      break;
	  }
    }


