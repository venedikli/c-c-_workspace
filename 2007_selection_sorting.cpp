
 /**************************************************************************
  **************************************************************************

	 A C++ Program to illustrate the Selection Sort.

 **************************************************************************
 **************************************************************************/

 # include <iostream.h>
 # include <conio.h>



 void selection_sort(long [],int);



 main( )

    {
       clrscr( );

       const int array_size=10;

       long array[array_size]={0};

       cout<<"\n ******************************************************************************"<<endl;
       cout<<" ******************************  Selection Sort  ******************************"<<endl;
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

       selection_sort(array,array_size);

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


 //--------------------  selection_sort(long[],int)  ---------------------//
 /*************************************************************************/

 void selection_sort(long array[],int array_size)
    {
       for(int count_1=0;count_1<array_size-1;count_1++)
	  {
	     int element=array[count_1];

	     for(int count_2=count_1+1;count_2<=array_size-1;count_2++)
		{
		   if(element>array[count_2])
		      {
			 long temp=element;

			 element=array[count_2];
			 array[count_2]=temp;
		      }
		}

	     array[count_1]=element;
	  }
    }

 
