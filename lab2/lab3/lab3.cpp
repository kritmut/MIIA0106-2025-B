
#include <iostream>
#include <string>
using namespace std;

int main()
{
	float price;
	int quantity;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter quantity: ";
	cin >> quantity;
	float total = price * quantity;

	cout << "==========Receipt===========" << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Total cost: " << total << endl;

	return 0;
}


