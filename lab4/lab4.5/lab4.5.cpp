
#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	int randomNumber = rand() % 100 + 1;
	int userGuess;
	cout << "Guess a number between 1 and 100: " << endl;
	do
	{
		cin >> userGuess;
		if (userGuess < randomNumber)
		{
			cout << "Too low! Try again: " << endl;
		}
		else if (userGuess > randomNumber)
		{
			cout << "Too high! Try again: " << endl;
		}
		cin.ignore();
	
			
	} while (userGuess != randomNumber);
		cout << "Congratulations! You guessed correctly!" << endl;

		return 1;
}

