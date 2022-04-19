
 #include<iostream.h>
 #include<conio.h>


 main()
    {
       clrscr();

       cout<<"\n ********  Continue Statement  *********"<<endl;

       int flag;

       for(int count=1;count<=10;count++)
	  {
	     if(count==5)
		{
		   flag=count;
		   continue;
		}

	     cout<<" "<<count;
	  }

       cout<<"\n\n Countinue occured at flag = "<<flag<<endl;

       getch();
       return 0;
    }

 
