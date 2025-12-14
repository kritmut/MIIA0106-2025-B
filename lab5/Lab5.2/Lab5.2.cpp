#include <iostream>
#include <string>

using namespace std;

int maxOfThree(int a, int b, int c)
{
	
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}
int minOfThree(int d, int e, int f)
{

	if (d <= e && d <= f)
		return d;
	else if (e <= d && e <= f)
		return e;
	else
		return f;
}
int main()
{
	int a, b, c;
	int maxvalue = -10000000;

	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b integers: ";
	cin >> b;
	cout << "Enter c integers: ";
	cin >> c;

	maxvalue = maxOfThree(a, b, c);
	cout << "The maximum value is: " << maxvalue << endl;

//minOfThree

	int d, e, f;
	int minvalue = -10000000;

	cout << "Enter d integers: ";
	cin >> d;
	cout << "Enter e integers: ";
	cin >> e;
	cout << "Enter f integers: ";
	cin >> f;

	minvalue = minOfThree(d, e, f);
	cout << "The minimum value is: " << minvalue << endl;

	return 1;

}