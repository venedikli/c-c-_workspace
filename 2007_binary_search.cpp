
 /*************************************************************************
  *************************************************************************

  A C++ Program to search an element in an array using Binary search.

  ************************************************************************
  ************************************************************************/

 # include <iostream.h>
 # include <conio.h>


 int binary_search(int [],int,int);


 main( )
    {
       clrscr( );

       const int array_size=10;
       int array[array_size]={0,6,9,12,20,23,29,32,47,79};

       cout<<" ******************************************************************************"<<endl;
       cout<<" *******************************  Binary Search  ******************************"<<endl;
       cout<<" ******************************************************************************"<<endl;

       gotoxy(1,24);
       cout<<" ******************************************************************************"<<endl;
       cout<<" ******************************************************************************";

       gotoxy(1,5);
       cout<<"\n The contents of the array are : "<<endl;

       cout<<"\n     Elements :"<<"\t\t     Value:"<<endl;

       for(int count=0;count<array_size;count++)
	  {
	     cout<<"\t"<<" array ["<<count<<"]"<<"\t\t";
	     cout<<array[count]<<endl;
	  }

       int searching_element=0;
       int flag=0;

       cout<<"\n Enter the element you want to find  =  ";
       cin>>searching_element;

       flag=binary_search(array,array_size,searching_element);

       if(flag!=-1)
	  cout<<"\n The given element is found at the position  array["<<
								   flag<<"]";

       else
	  cout<<"\n The given element is not found. ";

       getch( );
       return 0;
    }


 /*************************************************************************/
 /***********************  binary_search(int [],int,int)  *****************/
 /*************************************************************************/

 int binary_search(int array[],int array_size,int element)
    {
       int start=0;
       int end=array_size-1;
       int middle;
       int position=-1;

       middle=(start+end)/2;

       do
	  {
	     if(element<array[middle])
		end=middle-1;

	     else if(element>array[middle])
		start=middle+1;

	     middle=(start+end)/2;
	  }
       while(start<=end && array[middle]!=element);

       if(array[middle]==element)
	  position=middle;

       return position;
    }


