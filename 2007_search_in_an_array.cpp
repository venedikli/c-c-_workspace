
 /*************************************************************************

  A C++ Program to search an element in an array using Linear search
  (or Sequential Search).


  ************************************************************************/


 # include <iostream.h>
 # include <conio.h>

 int linear_search(int [],int,int);


 main( )
    {
       clrscr( );

       const int array_size=10;
       int array[array_size]={25,36,2,48,0,69,14,22,7,19};

       cout<<" ******************************************************************************"<<endl;
       cout<<" *******************************  Linear Search  ******************************"<<endl;
       cout<<" ******************************************************************************"<<endl;

       gotoxy(1,24);
       cout<<" ******************************************************************************"<<endl;
       cout<<" ******************************************************************************";

       gotoxy(1,5);
       cout<<" The contents of the array are : "<<endl;

       cout<<"\n     Elements :"<<"\t\t     Value:"<<endl;

       for(int count=0;count<array_size;count++)
	  {
	     cout<<"\t"<<" array ["<<count<<"]"<<"\t\t";
	     cout<<array[count]<<endl;
	  }

       int searching_element=0;
       int flag=0;

       cout<<"\n\n Enter the element you want to find  =  ";
       cin>>searching_element;

       flag=linear_search(array,array_size,searching_element);

       if(flag!=-1)
	  cout<<"\n The given element is found at the position : array["<<
								   flag<<"]";

       else
	  cout<<"\n The given element is not found. ";

       getch( );
       return 0;
    }


 int linear_search(int array[],int array_size,int element)
    {
       int flag=-1;

       for(int count=0;count<array_size;count++)
	  {
	     if(element==array[count])
		{
		   flag=count;
		   break;
		}
	  }

       return flag;
    }


