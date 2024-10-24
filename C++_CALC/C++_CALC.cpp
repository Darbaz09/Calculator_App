#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <windows.h>


using namespace std;


void clearConsole()
{
#ifdef _WIN32

	system("cls");

#endif
}


void displayMenu()
{
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\tAdvanced calculator " << "\n" << "More options: " << "\n";
	cout << "1. Addition" << "\n";
	cout << "2. Multiplication" << "\n";
	cout << "3. Division" << "\n";
	cout << "4. Subtraction" << "\n";
	cout << "5. Square Root" << "\n";
	cout << "6. Cube Root" << "\n";
	cout << "7. Exponential" << "\n";
	cout << "8. Rounding" << "\n" << "\n\n\n";
}



int main()
{
	while (true) {
		int option;
		double num = 0, num2 = 0;
		double result;

		displayMenu();

		cout << "Which one do you want to do(1-8)" << "\n";
		cin >> option;

		do {
			
			if (cin.fail() or option < 1 or option > 8)
			{
				cout << "Invalid option. Please choose between 1 and 8." << "\n\n\n\n\n";
				cin >> option;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
		} while ( cin.fail() || option < 1 || option > 8);
	
		if (option >= 1 && option <= 4)
		{
			cout << "What's your first number? " << "\n";
			cin >> num;
			cout << "What's your second number? " << "\n";
			cin >> num2;

		}

		else if (option >= 5)
		{
			cout << "What's your number? " << "\n";
			cin >> num;
		}

		switch (option)
		{
		case 1:
			result = num + num2;
			cout << num << " + " << num2 << " = " << result;
			break;
		case 2:
			result = num * num2;
			cout << num << " x " << num2 << " =" << result;
			break;
		case 3:
			if (num2 != 0)
			{
				result = num / num2;
				cout << num << " / " << num2 << " =" << result;
			} else
			{
				cout << "Cant divide by zero!";
			}
			 break;
		case 4:
			result = num - num2;
			cout << num << " - " << num2 << " =" << result;
			break;
		case 5:
			result = sqrt(num);
			cout << result;
			break;
		case 6:	
			result = cbrt(num);
			cout << result;
			break;
		case 7:
			result = exp(num);
			cout << result;
			break;
		case 8:
			result = "Not included yet ";
			break;
		}

		cout << "Please wait 3 Seconds refreshing the console...." << std::flush;
			Sleep(3000);
			clearConsole();
			
	}

	return 0;

}