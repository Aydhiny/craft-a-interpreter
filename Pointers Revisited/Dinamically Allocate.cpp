//Dynamically allocate memory for an integer, assign it a value, print the value, and then deallocate the memory.
#include <iostream>

using namespace std;

int main() 
{
	int* a = new int(50);

	cout << a << endl;
	cout << *a << endl;
	cout << &a << endl;

	delete a;
	return 0;
}