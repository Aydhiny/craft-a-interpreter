#include <iostream>

// Declare an integer variable and a pointer. Assign the address of 
// the integer variable to the pointer (DONE) and then modify 
// the value of the integer variable through the pointer.

using namespace std;

const char* linija = "\n----------------------\n";
int main() 
{
	int var;
	cout << "Unesite vr: " << endl;
	cin >> var;

	int* copy = &var;
	cout << linija;
	cout << "Value of copy: " << *copy << endl;
	cout << "Assigned adress: " << copy << " // " << &var << endl;
	cin >> *copy;
	cout << "Value of var: " << var << endl;
	cout << "Value of copy: " << *copy << endl;
	cout << linija;
	cout << "Assigned adress: " << copy << " // " << &var << endl;
	return 0;
}