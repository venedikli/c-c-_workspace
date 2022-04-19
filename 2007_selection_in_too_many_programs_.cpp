
 /*************************************************************************


  A C++ Program to illustration of Multiplication , Addition , Subtraction,
  Sorting , Transpose, Finding an element and Merging of two Matrices.


  ************************************************************************/


 # include <iostream.h>
 # include   <stdlib.h>
 # include    <conio.h>



 class matrix
	{
	   private:
		int operation;

		float matrix_a[3][3];
		float matrix_b[3][3];
		float matrix_c[3][3];

	   public:
		matrix();
		void get_matrix_a();
		void get_matrix_b();
		void get_operation();
		void add_matrices();
		void subtract_matrices();
		void multiply_matrices();
		void sort_matrix();
		void find_element();
		void transpose_matrix();
		void merging_matrices();
		void show_result_matrix();
	};


 matrix::matrix()
    {
	textmode(BW80);

	operation=1;

	for(int i=0;i<3;i++)
	   {
	      for(int j=0;j<3;j++)
		 {
		    matrix_a[i][j]=0;
		    matrix_b[i][j]=0;
		    matrix_c[i][j]=0;
		 }
	  }
    }

 /***********************************************************************/
 //--------------------------  get_matrix_a()  -------------------------//
 /***********************************************************************/

 void matrix::get_matrix_a()
    {
       gotoxy(1,7);
       cout<<" Enter the values of the matrix A row by row :\n "<<endl;

       cout<<"\t\t\t Ú               ¿"<<endl;
       cout<<"\t\t\t ³               ³"<<endl;
       cout<<"\t\t\t ³               ³"<<endl;
       cout<<"\t\t\t ³               ³"<<endl;
       cout<<"\t\t\t À               Ù"<<endl;

       gotoxy(18,11);
       cout<<" A  = "<<endl;


       int x=28;
       int y=10;

       for(int i=0;i<3;i++)
	  {
	     for(int j=0;j<3;j++)
		{
		   gotoxy(x,y);
		   cin>>matrix_a[i][j];

		   x+=5;
		}

	      x=28;
	      y++;
	  }
    }

 /***********************************************************************/
 //-------------------------  get_matrix_b()  --------------------------//
 /***********************************************************************/

 void matrix::get_matrix_b()
    {
      gotoxy(1,17);
       cout<<" Enter the values of the matrix B row by row :\n "<<endl;

       cout<<"\t\t\t Ú               ¿"<<endl;
       cout<<"\t\t\t ³               ³"<<endl;
       cout<<"\t\t\t ³               ³"<<endl;
       cout<<"\t\t\t ³               ³"<<endl;
       cout<<"\t\t\t À               Ù"<<endl;

       gotoxy(18,21);
       cout<<" B  = "<<endl;

       int x=28;
       int y=20;

       for(int i=0;i<3;i++)
	  {
	     for(int j=0;j<3;j++)
		{
		   gotoxy(x,y);
		   cin>>matrix_b[i][j];

		   x+=5;
		}

	      x=28;
	      y++;
	  }
    }

 /***********************************************************************/
 //----------------------  merging_matrices()  -------------------------//
 /***********************************************************************/


 void matrix::merging_matrices()
    {
       float temp_matrix[3][6]={0};

       gotoxy(1,12);
       cout<<"\n The merging matrix_c of matrix_a & matrix_b is :\n"<<endl;

       cout<<"\t\t\t Ú                              ¿"<<endl;
       cout<<"\t\t\t ³                              ³"<<endl;
       cout<<"\t\t\t ³                              ³"<<endl;
       cout<<"\t\t\t ³                              ³"<<endl;
       cout<<"\t\t\t À                              Ù"<<endl;

       gotoxy(13,17);
       cout<<" ( A,B ) = "<<endl;

       for(int a=0;a<3;a++)
	  {
	     for(int b=0;b<6;b++)
		{
		   if(b<3)
		      temp_matrix[a][b]=matrix_a[a][b];
		   else
		     temp_matrix[a][b]=matrix_b[a][b-3];
		}
	  }

       int x=28;
       int y=16;

       for(int i=0;i<3;i++)
	  {
	     for(int j=0;j<6;j++)
		{
		   gotoxy(x,y);
		   cout<<temp_matrix[i][j];

		   x+=5;
		}

	      x=28;
	      y++;
	  }
    }

 /***********************************************************************/
 //----------------------  get_operation()  ----------------------------//
 /***********************************************************************/

 void matrix::get_operation()
    {
       cout<<"\n ******************************************************************************"<<endl;
       cout<<" * * * * * *  Operations that can be performed on Matrices  * * * * * * * * * *"<<endl;
       cout<<" ******************************************************************************"<<endl;

       gotoxy(1,25);
       cout<<" ******************************************************************************";

       gotoxy(1,7);
       cout<<" Select one of the following :\n "<<endl;

       cout<<"\t\t  1)-  Addition  ( A + B )"<<endl;
       cout<<"\t\t  2)-  Subtraction  ( A - B )"<<endl;
       cout<<"\t\t  3)-  Subtraction  ( B - A )"<<endl;
       cout<<"\t\t  4)-  Multiplication  ( A * B )"<<endl;
       cout<<"\t\t  5)-  Sorting  ( in ascending order )"<<endl;
       cout<<"\t\t  6)-  Sorting  ( in decending order )"<<endl;
       cout<<"\t\t  7)-  Finding an element "<<endl;
       cout<<"\t\t  8)-  Transpose "<<endl;
       cout<<"\t\t  9)-  Merging Metrices  (A,B) "<<endl;
       cout<<"\t\t  0)-  Exit"<<endl;

       gotoxy(19,20);
       cout<<"Enter your Choice = ";

       do
	  {
	     gotoxy(39,20);
	     cin>>operation;

	     gotoxy(38,20);
	     cout<<"  ";
	  }
       while(operation<0 || operation>9);

       if(operation==0)
	  exit(0);

       clrscr();

       cout<<"\n ******************************************************************************"<<endl;
       cout<<" * * * * * *  * * * * * * * * *  Matrices  * * * * * * * * * * * * * * * * * *"<<endl;
       cout<<" ******************************************************************************"<<endl;

       gotoxy(1,25);
       cout<<" ******************************************************************************";

       switch(operation)
	  {
	     case 1 : get_matrix_a();
		      get_matrix_b();
		      break;

	     case 2 : get_matrix_a();
		      get_matrix_b();
		      break;

	     case 3 : get_matrix_a();
		      get_matrix_b();
		      break;

	     case 4 : get_matrix_a();
		      get_matrix_b();
		      break;

	     case 5 : get_matrix_a();
		      break;

	     case 6 : get_matrix_a();
		      break;

	     case 7 : get_matrix_a();
		      break;

	     case 8 : get_matrix_a();
		      break;

	     case 9 : get_matrix_a();
		      get_matrix_b();
		      break;
	  }
    }

 /***********************************************************************/
 //----------------------  find_element()  -----------------------------//
 /***********************************************************************/

 void matrix::find_element()
    {
	float number;
	int flag=0;

	int temp_array[3][3]={0};

	gotoxy(1,13);
	cout<<" Enter the number you want to find = ";
	cin>>number;

	int i=0;
	int j=0;

	for(i=0;i<3;i++)
	   {
	      for(j=0;j<3;j++)
		 {
		    if(matrix_a[i][j]==number)
		       {
			  temp_array[i][j]=1;
			  flag=1;
			}
		 }
	  }

       gotoxy(5,15);

       if(flag==0)
	  cout<<"The given number is not found"<<endl;

       else
	  {
	     cout<<"The given number is at the positions : "<<endl;

	     int count=0;

	     for(int i=0;i<3;i++)
		{
		   for(int j=0;j<3;j++)
		      {
			 if(temp_array[i][j]==1)
			    cout<<"\t\t\t"<<++count<<")-  Matrix["<<i<<"]["
						  <<j<<"] = "<<number<<endl;
		      }
		}
	  }
    }

 /***********************************************************************/
 //----------------------  transpose_matrix()  -------------------------//
 /***********************************************************************/

 void matrix::transpose_matrix()
    {
       for(int i=0;i<3;i++)
	  {
	     for(int j=0;j<3;j++)
		matrix_c[j][i]=matrix_a[i][j];

	  }
    }

 /***********************************************************************/
 //----------------------  sort_matrix()  ------------------------------//
 /***********************************************************************/


 void matrix::sort_matrix()
    {
       if(operation==5)    //ascending
	  {
	     for(int i=0;i<3;i++)
		{
		   for(int j=0;j<3;j++)
		      {
			 for(int k=0;k<2;k++)
			    {
				if(matrix_a[j][k]>matrix_a[j][k+1])
				   {
				      float temp=0;

				      temp=matrix_a[j][k+1];
				      matrix_a[j][k+1]=matrix_a[j][k];
				      matrix_a[j][k]=temp;
				   }
			    }
		      }
		}
	  }

       else if(operation==6)    //decending
	  {
	     for(int i=0;i<3;i++)
		{
		   for(int j=0;j<3;j++)
		      {
			 for(int k=0;k<2;k++)
			    {
				if(matrix_a[j][k]<matrix_a[j][k+1])
				   {
				      float temp=0;

				      temp=matrix_a[j][k];
				      matrix_a[j][k]=matrix_a[j][k+1];
				      matrix_a[j][k+1]=temp;
				   }
			    }
		      }
		}
	  }

	for(int m=0;m<3;m++)
	   {
	      for(int n=0;n<3;n++)
		 matrix_c[m][n]=matrix_a[m][n];
	   }
    }

 /***********************************************************************/
 //----------------------  add_matrices()  -----------------------------//
 /***********************************************************************/

 void matrix::add_matrices()
    {
       if(operation==1)
	  {
	     for(int i=0;i<3;i++)
		{
		   for(int j=0;j<3;j++)
		      matrix_c[i][j]=matrix_a[i][j]+matrix_b[i][j];
		}
	  }
    }

 /***********************************************************************/
 //----------------------  subtract_matrices()  ------------------------//
 /***********************************************************************/

 void matrix::subtract_matrices()
    {
       if(operation==2)               // a-b
	  {
	     for(int i=0;i<3;i++)
		{
		   for(int j=0;j<3;j++)
		      matrix_c[i][j]=matrix_a[i][j]-matrix_b[i][j];
		}
	  }
				  //b-a
       else if(operation==3)
	  {
	     for(int i=0;i<3;i++)
		{
		   for(int j=0;j<3;j++)
		      matrix_c[i][j]=matrix_b[i][j]-matrix_a[i][j];
		}
	  }
    }

 /***********************************************************************/
 //----------------------  multiply_matrices()  ------------------------//
 /***********************************************************************/

 void matrix::multiply_matrices()
  {
       for(int i=0;i<3;i++)
	  {
	     for(int j=0;j<3;j++)
		{
		   float value=0;
		   float sum=0;

		   for(int k=0;k<3;k++)
		      {
			 value=matrix_a[j][k]*matrix_b[k][j];
			 sum+=value;
		      }

		   matrix_c[i][j]=sum;
		}
	  }
  }

 /***********************************************************************/
 //----------------------  show_result_matrix()  -----------------------//
 /***********************************************************************/

 void matrix::show_result_matrix()
    {
       cout<<"\n ******************************************************************************"<<endl;
       cout<<" * * * * * *  * * * * *  Resulting Matrix  * * * * * * * * * * * * * * * * * * "<<endl;
       cout<<" ******************************************************************************"<<endl;


       if(operation==5 || operation==6 || operation==7 || operation==8)
	 {
	    gotoxy(1,6);
	    cout<<" The value of Matrix A are :"<<endl;

	    cout<<"\t\t Ú               ¿  "<<endl;
	    cout<<"\t\t ³               ³  "<<endl;
	    cout<<"\t\t ³               ³  "<<endl;
	    cout<<"\t\t ³               ³  "<<endl;
	    cout<<"\t\t À               Ù  "<<endl;
	  }

       else if(operation!=5 || operation!=6 || operation!=7 || operation!=8)
	  {
	     gotoxy(1,6);
	     cout<<" The values of Matrix A and B are :"<<endl;

	     cout<<"\t\t Ú               ¿  	            Ú               ¿"<<endl;
	     cout<<"\t\t ³               ³                  ³               ³"<<endl;
	     cout<<"\t\t ³               ³   	            ³               ³"<<endl;
	     cout<<"\t\t ³               ³  	            ³               ³"<<endl;
	     cout<<"\t\t À               Ù 		    À               Ù"<<endl;

	     gotoxy(45,9);
	     cout<<" B  = "<<endl;
	  }

       gotoxy(10,9);
       cout<<" A  = "<<endl;


       int x_1=20;
       int y_1=8;

       for(int i=0;i<3;i++)
	  {
	     for(int j=0;j<3;j++)
		{
		   gotoxy(x_1,y_1);
		   cout<<matrix_a[i][j];

		   x_1+=5;
		}

	      x_1=20;
	      y_1++;
	  }


       if(operation!=5 && operation!=6 && operation!=7 && operation!=8)
	  {
	     int x_2=55;
	     int y_2=8;

	     for(int m=0;m<3;m++)
		{
		   for(int n=0;n<3;n++)
		      {
			 gotoxy(x_2,y_2);
			 cout<<matrix_b[m][n];

			 x_2+=5;
		      }

		   x_2=55;
		   y_2++;
		}
	  }

       gotoxy(1,15);

       if(operation==1)
	  cout<<" The Addition of matrix A and B is :\n "<<endl;
       else if(operation==2 || operation==3)
	  cout<<" The Subtraction of matrix A and B is :\n "<<endl;
       else if(operation==4)
	  cout<<" The Product of matrix A and B is :\n "<<endl;
       else if(operation==5)
	  cout<<" The matrix A in the ascending order is :\n"<<endl;
       else if(operation==6)
	  cout<<" The matrix A in the decending order is :\n"<<endl;
       else if(operation==8)
	  cout<<" The Transpose of matrix A is :\n"<<endl;

       if(operation!=7 && operation!=9)
	  {
	     cout<<"\t\t\t Ú               ¿"<<endl;
	     cout<<"\t\t\t ³               ³"<<endl;
	     cout<<"\t\t\t ³               ³"<<endl;
	     cout<<"\t\t\t ³               ³"<<endl;
	     cout<<"\t\t\t À               Ù"<<endl;
	  }

       gotoxy(13,19);

       if(operation==1)
	  {
	     cout<<" A + B  = "<<endl;
	     add_matrices( );
	  }

       else if(operation==2)
	  {
	     cout<<" A - B  = "<<endl;
	     subtract_matrices( );
	  }

       else if(operation==3)
	  {
	     cout<<" B - A  = "<<endl;
	     subtract_matrices( );
	  }

       else if(operation==4)
	  {
	     cout<<" A * B  = "<<endl;
	     multiply_matrices( );
	  }

       else if(operation==5 || operation==6)
	  {
	     cout<<"Sorted  A ="<<endl;
	     sort_matrix( );
	  }

       else if(operation==7)
	  find_element( );

       else if(operation==8)
	  {
	     cout<<" A+ ="<<endl;
	     transpose_matrix( );
	  }

       else if(operation==9)
	  {
	     cout<<" ( A,B ) = "<<endl;
	     merging_matrices( );
	  }

       else if(operation==0)
	  exit(0);

       gotoxy(1,25);
       cout<<" ******************************************************************************";


       if(operation!=7 && operation!=9)
	  {
	     int x_3=28;
	     int y_3=18;

	     for(int p=0;p<3;p++)
		{
		   for(int q=0;q<3;q++)
		      {
			 gotoxy(x_3,y_3);
			 cout<<matrix_c[p][q];

			 x_3+=5;
		      }

		   x_3=28;
		   y_3++;
		}
	  }
    }

 /***********************************************************************/
 /***********************************************************************/
 //-----------------------------  main( ) ------------------------------//
 /***********************************************************************/
 /***********************************************************************/

 main()
    {
       matrix obj;

       do
	  {
	     clrscr( );

	     obj.get_operation( );

	     getch( );
	     clrscr( );

	     obj.show_result_matrix( );

	     getch( );
	  }
       while(!0);

       return 0;
    }

 /***********************************************************************/
 /***********************************************************************/
 //-----------------------------  THE END  -----------------------------//
 /***********************************************************************/
 /***********************************************************************/
