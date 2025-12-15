
#include<iostream>
using namespace std;
int main()
{
	char direction;
	do
		{
		cout << "Enter the sensor's value (L for left , R for right , M for move forward , F for arrived): ";
		cin >> direction;
		cin.ignore();
		switch (direction)
		{
		case 'L':
			cout << "Car is moving to the left." << endl;
			break;
		case 'R':		
			cout << "Car is moving to the right." << endl;
			break;
		case 'M':	
			cout << "Car is moving forward." << endl;
			break;
		case 'F':
			cout << "Car has arrived at the destination." << endl;
			break;
		default:
			cout << "Invalid sensor's value, Car is stopped" << endl;
			break;
		}
	} while (direction != 'F' && direction != 'f');
				
	return 1;
}