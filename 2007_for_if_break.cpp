

 #include<iostream.h>
 #include<conio.h>


 main()
    {
    int count;
       clrscr();

       cout<<"\n ********  Break Statement  *********"<<endl;

       for(int count=1;count<=10;count++)
	  {
	     if(count==5)
		break;

	     cout<<" "<<count;
	  }

       cout<<"\n\n Counting was broken at count = "<<count<<endl;

       getch();
       return 0;
    }


