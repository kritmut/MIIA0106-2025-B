#include <iostream>
#include <string>

using namespace std;

void swapValues(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside swapValues function: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
}
void swapRef(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside swapValues function: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
}
int main()
{
	int a, b;
	cout << "Enter value for a: ";
	cin >> a;
	cout << "Enter value for b: ";
	cin >> b;
	cout << "Before calling swapValues function: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	swapValues(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	swapRef(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	
	return 0;

}