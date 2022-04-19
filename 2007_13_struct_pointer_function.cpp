#include<stdio.h>
#include<conio.h>
#define LEN 20
 struct names{
               char first[LEN];
               char last[LEN];
              };
  struct guy{
             struct names handle;
             char favfood[LEN];
             char job[LEN];
             float income;
             };

 main()
 {
    static struct guy fellow[2]={
            {  { "Franco","Wathall"  },
                 "eggplant",
                 "doormat customizer",
                 15435.00
            },
            {  {"Rodney","Swillbelly"},
            "salmon mousse",
            "interior decorator",
            35000.00
            }
                               };

    struct guy *him;

    printf("address #1: %u #2: %u\n",&fellow[0],&fellow[1]);
    him=&fellow[0];
    printf("pointer #1: %u #2: %u\n",him,him+1);
    printf("him->income is $%.2f: (*him).income is $%.2f\n",
             him->income,(*him).income);
     him++;
     printf("him->favfood is %s: him->handle.last is %s\n",
             him->favfood,   him->handle.last);        
  getch();
 }