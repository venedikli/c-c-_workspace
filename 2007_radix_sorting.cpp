
 /**************************************************************************
  **************************************************************************

	 A C++ Program to illustrate the Radix Sort.

 **************************************************************************
 **************************************************************************/


 # include <iostream.h>
 # include <conio.h>


 # define array_size 10


 void radix_sort(long []);//prototype


 main( )
    {
       clrscr( );

       long array[array_size]={0};

       cout<<"\n ******************************************************************************"<<endl;
       cout<<" *********************************  Radix Sort  *******************************"<<endl;
       cout<<" ******************************************************************************"<<endl;

       cout<<"\n * Array size = 10"<<endl;
       cout<<" * Data Type = long"<<endl;

       gotoxy(1,24);
       cout<<" ******************************************************************************";
       gotoxy(1,25);
       cout<<" ******************************************************************************";

       gotoxy(1,10);
       cout<<" Enter the array : "<<endl<<endl;

       for(int count_1=0;count_1<array_size;count_1++)
	  {
	     cout<<"\t Element["<<count_1<<"] = ";
	     cin>>array[count_1];
	  }

       radix_sort(array);

       gotoxy(40,10);
       cout<<" Sorted Array : ";

       for(int count_2=0;count_2<array_size;count_2++)
	  {
	     gotoxy(50,12+count_2);
	     cout<<"Element["<<count_2<<"] = "<<array[count_2]<<endl;
	  }

       getch( );
       return 0;

    }


 void radix_sort(long array[])
    {
       int largest_element=array[0];

       for(int count_1=0;count_1<array_size;count_1++)
	  {
	     if(array[count_1]>largest_element)
		largest_element=array[count_1];
	  }

       int maximum_digits=0;
       int temp=largest_element;

       do
	  {
	     temp/=10;
	     maximum_digits++;
	  }
       while(temp>0);

       for(int count_2=0;count_2<maximum_digits;count_2++)
	  {
	     int queue[10][array_size]={0};
	     int front[10];
	     int rear[10];

	     for(int count_3=0;count_3<10;count_3++)
		{
		   front[count_3]=-1;
		   rear[count_3]=-1;
		}

	     for(int count_4=0;count_4<array_size;count_4++)
		{
		   int temp=array[count_4];

		   for(int count_5=0;count_5<count_2;count_5++)
		      temp/=10;

		   int significant_digit=temp%10;

		   if(rear[significant_digit]==-1)
		      {
			 rear[significant_digit]=0;
			 front[significant_digit]=0;
		      }

		   else
		      rear[significant_digit]++;

		   queue[significant_digit][rear[significant_digit]]=
							      array[count_4];
		}

	     int count_6=0;
	     int count_7=0;

	     do
		{
		   if(front[count_7]==0)
		      {
			 do
			    {
			       array[count_6]=queue[count_7][front[count_7]];
			       front[count_7]++;
			       count_6++;
			    }
			 while(front[count_7]<=rear[count_7]);
		      }

		   count_7++;
		}
	     while(count_6<array_size);

	  }
    }


