#include <iostream>
using namespace std;
void staticArrayInit(void);
void automaticArrayInit(void);
const int arraySize = 3;
int main()
{
	cout << "First call to each function: \n"; 
	staticArrayInit();
	automaticArrayInit();
	cout << "\n\nSecond call to each function : \n"; 
	staticArrayInit();
	automaticArrayInit(); 
	cout << endl;
}

void staticArrayInit(void) {
	static int array1[arraySize];
		cout << "\nvalues on entering staticArrayInit:\n";
		for (int i = 0; i < arraySize; i++)
			cout << "array1[" << i << "]= " << array1[i] << ""; cout << "\nvalues on exiting staticArrayInit: \n";
		for (int j = 0; j < arraySize; j++)
			cout << "arrayi[" << j << "]- " << (array1[j] += 5) << " ";
} 

void automaticArrayInit(void) {
	int array2[arraySize] = { 1,2,3 };
	cout << "\n\nValues on entering automaticArrayInit: \n";

	for (int i = 0; i < arraySize; i++)
		cout << "array2[" << i << "]= " << array2[i] << "";
	cout << "\nvalues on exiting automaticArrayInit: \n";

	for (int j = 0; j < arraySize; j++)
		cout << "array2[" << j << "] - " << (array2[j] += 5) << "";
}