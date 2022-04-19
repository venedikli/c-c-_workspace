

// Included files.

#include <iostream> // Required for stream output (cout).
#include <string> // Required for string class.
#include<conio.h>
using namespace std;

int main()
{

	const string first("Charles"); // Constructor call style initialization.
	const string last = "Tritt"; // Assignment style initialization.
	string mi = "S."; // Who knows, I might change my middle initial.
	string whole;
	whole = first + " " + last;
	cout << whole << " is my name.\n";
	whole.insert(7, " " + mi); // Insert a space and middle initial.
	cout << whole << " is also my name.\n";
	cout << whole.find("Tr") << " is the starting position of \"Tr\" in whole.\n";
	cout << whole.length() << " is the length of whole.\n";
	cout << whole.substr(4,6) << " is substring 4, 6 of whole.\n";
    getch();
	return 0;
}