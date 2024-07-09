// Create an array of integers and use a pointer to iterate through the array, printing each element.
#include <iostream>

using namespace std;

int main() 
{
	int arr[5] = {1,2,3,4,5};
	int* pokArr = arr;
	cout << pokArr << endl;
	for(int i = 0; i < 5; i++) 
	{
		cout << pokArr[i] << endl;
	}

	return 0;
}