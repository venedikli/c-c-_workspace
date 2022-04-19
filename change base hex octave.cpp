#include<stdio.h>
#include<conio.h>
int cevirim( int a, int b);
main()
{
  int sayi,taban;
  printf("lutfen sayiyi giriniz:");
  scanf("%d",&sayi);
  do
  {
    printf("\nlutfen sayiyi cevirmek istediginiz tabani giriniz:");
    scanf("%d",&taban);
  } while(sayi<taban);
  printf("sayinizin %d tabanindaki karsiligi =",taban);
  cevirim( taban, sayi);
  getch();
  return 0;
}

int cevirim(int tb,int sy)
{
  int index[500],rand=0,basamak;
  do
  {
    basamak=sy%tb;
    index[rand]=basamak;
    sy=sy/tb;
    rand++;
  } while(sy>tb);
  index[rand]=sy;
  for(;rand>=0;rand--)
    printf("%d",index[rand]);
  return 0;
}
