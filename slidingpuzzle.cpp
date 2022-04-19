#include<stdio.h>
#include<stdlib.h>
#include <time.h>
 
int rand_number(void);
int farkliUret( int [16], int ,int);
void doPuzzleBoard(int [16],int [ ][ 4 ], int);
void PrintPuzzleBoard( int [ ][ 4 ], int );
void change(int [ ][ 4 ],int);
int oyunBitisControl(int [ ][ 4 ]);
int indexKontrol(int [ ][ 4 ], int);
int tasKontrol(int [ ][ 4 ], int);
 
int main()
{
  
 srand(time(NULL));
 int temp[16];
 int PuzzleBoard[ 4 ][ 4 ];//4 e 4 lük bir puzzle alaný oluþturuyoruz ve çok boyutlu dizi kullanýyoruz.
  
   
 
 
int secim=1;
while(secim==1){
doPuzzleBoard(temp,PuzzleBoard,4);
   int kontrol=1;
int rakam=-1;     
while(kontrol==1)
{
 
PrintPuzzleBoard(PuzzleBoard,4);   
 printf("\nLutfen hareket ettirmek istediginiz rakami seciniz:\t");
 scanf("%d",&rakam); 
 int indx=indexKontrol(PuzzleBoard,rakam);
// if(indx!=17){
if(tasKontrol(PuzzleBoard,indx)==1){
 change(PuzzleBoard,rakam);
 if(oyunBitisControl(PuzzleBoard)==1)
  {
     PrintPuzzleBoard(PuzzleBoard,4);  
     printf("Tebrikler oyunu bitirdiniz.Tekrar oynamak ister misiniz(1/0)?");
     scanf("%d",&secim); 
     break;
  }  
 }
 else{printf("\n\n%d hareket edemez!\n\n",rakam);}
//}
//else{   printf("\n\n Boyle Bir sayi %d dizi icerisinde bulunmamaktadir!\n\n",rakam);

//}
}
 
}
 
 
//ekranýn sabit kalmasý için
system("PAUSE");
return 0;    
}
 
 
//yeni bir PuzzleBoard oluþturur
void doPuzzleBoard(int tempdizi[16],int PuzzleBoard[ ][ 4 ], int satir_sayisi ){
 printf("\nKayan Puzzle Oyunu\n\n");    
 int count=0;   
  int sayi=-1;
                for(int x=0;count<15;x++)
 {
  sayi=rand_number();
  while(farkliUret(tempdizi,sayi,count)==1)
  {
      tempdizi[count]=sayi;                      
      count++;
     // printf("*%d\n",sayi);
      
  }
    //printf("-");    
 }
  
  int sayac=0;
  for(int i = 0; i < 4; i++ ) {
        for(int j = 0; j < 4; j++ ) {
             
            
               
           PuzzleBoard[ i ][ j ]=tempdizi[sayac];
         
            sayac++;
        }
         
    }
PuzzleBoard[ 3 ][ 3 ]=0;
 
}
 
//1 ile 15 arasinda rasgele sayi ureten fonksiyon
int rand_number(void)
{
   return rand() % 15 + 1;
}
 
//tekrar etmeyen sayýlar üretmek için
int farkliUret(int dizi[16],int sayi,int countsay)
{
    for(int c=0;c<=countsay;c++){
    if(dizi[c]==sayi)
    {
     return 0;
    }
    }
    return 1;
}
 
//PuzzleBoard son halini yazdýrýr
void PrintPuzzleBoard( int dizi[ ][ 4 ], int satir_sayisi )
{
    int i, j;
    for( i = 0; i < 4; i++ ) {
        for( j = 0; j < 4; j++ ) {
             if(dizi[ i ][ j ] ==0)
             {printf( "_\t");}
             else{printf( "%d\t", dizi[ i ][ j ] );}
        }
       printf( "\n" );
    }
}
 
 
//parçalarýn yerini deðiþtiren fonksiyon
void change(int dizi[ ][ 4 ], int rakam)
{
    int i, j;
    int tempi,tempj,s1,s2;
    for( i = 0; i < 4; i++ ) {
        for( j = 0; j < 4; j++ ) {
             if(dizi[ i ][ j ] ==rakam)
             {
                     s1=i;
                     s2=j;
                
             }
             if(dizi[ i ][ j ] ==0){tempi=i;tempj=j;}
              
        }
        
    }
   dizi[ tempi ][ tempj ]=rakam;
   dizi[s1][s2]=0;
    
    
}
 
 
//oyunun bittiðini kontrol eden fonksiyon
int oyunBitisControl(int dizi[ ][ 4 ])
{
      
  if(dizi[0][0]==1&&dizi[0][1]==2&&dizi[0][2]==3&&dizi[0][3]==4
   &&dizi[1][0]==5&&dizi[1][1]==6&&dizi[1][2]==7&&dizi[1][3]==8     
   &&dizi[2][0]==9&&dizi[2][1]==10&&dizi[2][2]==11&&dizi[2][3]==12
    &&dizi[3][0]==13&&dizi[3][1]==14&&dizi[3][2]==15&&dizi[3][3]==0 
  ){
  return 1;                                                                  
  }   
  return 0;   
      
}
 
//parçalarýn yerinin deðiþip deðiþemeyeceði kontrol için taþlarýn bulunduðu indexi bulma
int indexKontrol(int dizi[ ][ 4 ], int rakam)
{
    int i, j;
    int indexSay=0;
    for( i = 0; i < 4; i++ ) {
        for( j = 0; j < 4; j++ ) {
           if(dizi[ i ][ j ]!=rakam)
           {
              indexSay++;      
           }
            
           if(dizi[ i ][ j ]==rakam)
           {
              return indexSay;
           }
        }
     
    }
 
}
 
 
 
//parçalarýn yerinin deðiþip deðiþemeyeceði kontrol ,deðiþiyorsa 1 döndürür
//
int tasKontrol(int dizi[ ][ 4 ], int index)
{
    int i, j;
   
    int indexSay=0;
    for( i = 0; i < 4; i++ ) {
        for( j = 0; j < 4; j++ )
        {
         if(index==0)
         {
          if( dizi[0][1]==0|| dizi[1][0]==0){return 1;}else{return 0;}           
         }
         else  if(index==1)
         {
          if( dizi[0][0]==0|| dizi[0][2]==0|| dizi[1][1]==0){return 1;}else{return 0;}           
         }
          else  if(index==2)
         {
          if( dizi[0][1]==0|| dizi[0][3]==0|| dizi[1][2]==0){return 1;}else{return 0;}           
         }
       else  if(index==3)
         {
          if( dizi[0][2]==0|| dizi[1][3]==0){return 1;}else{return 0;}           
         } else  if(index==4)
         {
          if(dizi[0][0]==0|| dizi[1][1]==0|| dizi[2][0]==0){return 1;}else{return 0;}           
         } else  if(index==5)
         {
          if( dizi[1][0]==0|| dizi[0][1]==0|| dizi[1][2]==0|| dizi[2][1]==0){return 1;}else{return 0;}           
         }
         else  if(index==6)
         {
          if( dizi[1][1]==0|| dizi[0][2]==0|| dizi[1][3]==0|| dizi[2][2]==0){return 1;}else{return 0;}           
         }else  if(index==7)
         {
          if( dizi[0][3]==0|| dizi[1][2]==0|| dizi[2][3]==0){return 1;}else{return 0;}           
         }else  if(index==8)
         {
          if( dizi[1][0]==0|| dizi[3][0]==0|| dizi[2][1]==0){return 1;}else{return 0;}           
         }else  if(index==9)
         {
          if( dizi[2][0]==0|| dizi[2][2]==0|| dizi[1][1]==0 || dizi[3][1]==0){return 1;}else{return 0;}           
         }else  if(index==10)
         {
          if( dizi[2][1]==0|| dizi[2][3]==0|| dizi[1][2]==0 || dizi[3][2]==0){return 1;}else{return 0;}           
         }else  if(index==11)
         {
          if( dizi[2][2]==0|| dizi[1][3]==0|| dizi[3][3]==0){return 1;}else{return 0;}           
         }else  if(index==12)
         {
          if( dizi[2][0]==0|| dizi[3][1]==0){return 1;}else{return 0;}           
         }else  if(index==13)
         {
          if( dizi[3][0]==0|| dizi[3][2]==0|| dizi[2][1]==0){return 1;}else{return 0;}           
         }else  if(index==14)
         {
          if( dizi[3][1]==0|| dizi[2][2]==0|| dizi[3][3]==0){return 1;}else{return 0;}           
         }
         
        }
     
    }
     
   return 0;
}
