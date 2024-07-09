// Create an integer variable, a pointer to it, and a pointer to that pointer. 
// Modify the value of the integer variable using the pointer to the pointer.
#include <iostream>

using namespace std;

int main() 
{
	int var = 5;
	int* copy = &var;
	int** copy2 = &copy;
	int*** copy3 = &copy2;

	cout << "Variable: " << var << endl;
	cout << "Copy value: " << *copy << endl;
	cout << "Copy2 value: " << **copy2 << endl;
	cout << "Copy3 value: " << ***copy3 << endl;

	cout << "Insert new value: ";
	cin >> ***copy3;

	cout << "Variable: " << var << endl;
	cout << "Copy value: " << *copy << endl;
	cout << "Copy2 value: " << **copy2 << endl;
	cout << "Copy3 value: " << ***copy3 << endl;

	cout << "\n\n";
	cout << &var << endl;
	cout << copy << endl;
	cout << copy2 << endl;
	cout << *copy3 << " " << **copy3 << " " << ***copy3 << endl;

	float varijabla = 50.5f;
	float* varC = &varijabla;
	float** varCC = &varC;
	float*** varCCC = &varCC;
	cout << &varijabla << endl;
	cout << varC << endl;
	cout << varCC << endl;
	cout << *varCCC << " -> " << varCC << endl;
	cout << **varCCC << " -> " << &varijabla << endl;
	cout << ***varCCC << " -> " << **varCC << endl;

	return 0;
}