#include <iostream>
#include <string>

using namespace std;

double calculateArea(double radius)
{
	return 3.14 * radius * radius; // calculate area of circle
}

double rectArea(double width, double height)
{
	double result = width * height; // calculate area of rectangle
	return result;
}

int main()
{
	double radius; // declare radius variable
	double result; // declare area variable

	cout << "Enter the radius: "; // prompt user for radius
	cin >> radius; // read radius from user

	//Result = 3.14 * radius * radius; // calculate area
	//cout << "The area of the ciecle is: " << Result << endl; // display area

	result = calculateArea(radius);
	cout << "The area of the circle is: " << result << endl; // display area

	double width, height; // declare width and height variables
	cout << "Enter the width: "; // prompt user for width
	cin >> width; // read width from user
	cout << "Enter the height: "; // prompt user for height
	cin >> height; // read height from user

	result = rectArea(width, height);
	cout << "The area of the rectangle is: " << result << endl; // display area
    return 1;
}

