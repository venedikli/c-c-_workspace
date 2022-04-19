/*
try - specifies an area of code where exceptions will operate 
catch - deals with the exceptional situation produced in the previous try clause. 
throw - causes an exceptional situation     */
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Ball {
public:
  int number;
  string message;
};


int main() {
  for (int i=1;i<4;i++) {
  try {
    switch (i) {
    case 1: throw 999 ;
    case 2: throw  "help!";
    case 3: Ball *ball = new Ball;
            ball->number =999;
            ball->message="help!";
            throw ball;
    }
  } // end of try
  catch(int errornumber) {
    cerr << "error number is " << errornumber << endl;
    getch();
  }
  catch (const char* errormessage) {
    cerr << "error message is " << errormessage << endl;
  }
  catch(Ball *b) {
    cerr << "error " << b->number << " - " << b->message << endl;
  }
  } // end of for

}
