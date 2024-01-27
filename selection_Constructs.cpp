using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

int main() {
	//initializing variables
	string maritalStatus;
	char repeat;
	float income, tax, newIncome;

	//collecting an input from user while making sure the user enters the correct values.
	do {
		cout << "Calculator says: Are you single or married? (type [single] or [married])\n";
		cin >> maritalStatus;
		while (maritalStatus != "single" && maritalStatus != "married") {
			cout << "Calculator says: Please enter one of the given options: [single] or [married]\n";
			cin >> maritalStatus;
		}
	
		cout << "Calculator says: What's your income?\n";
		cin >> income;
		while (income <= 0) {
			cout << "Calculator says: Please enter a number greater than 0!\n" ;
			cin >> income;
		}
	
		//checking if user is single, and going through conditions per different tax brackets. Calculating tax
		if (maritalStatus == "single") {
			if (income <= 8000) {
				tax = income * 0.10;
			}
			else if (income <= 32000) {
				tax = 800 + ((income - 8000) * 0.15);
			}
			else {
				tax = 4400 + (((income - 32000) * 0.25));
			}
	
			newIncome = income - tax;
			cout << fixed << setprecision(2) << "Calculator says: Your old income with no tax was " << income << endl;
			cout << fixed << setprecision(2) << "Calculator says: Your tax comes out to " << tax << endl;
			cout << fixed << setprecision(2) << "Calculator says: Income subtracting tax is " << newIncome << endl;
		}
		//checking if user is married, and going through conditions per different tax brackets. Calculating tax
		else if (maritalStatus == "married") {
			if (income <= 16000) {
				tax = income * 0.10;
			}
			else if (income <= 64000) {
				tax = 1600 + ((income - 16000) *.15);
			}
			else {
				tax = 8800 + (((income - 64000) * 0.25));
			}
			newIncome = income - tax;
			cout << fixed << setprecision(2) << "Calculator says: Your old income with no tax was " << income << endl;
			cout << fixed << setprecision(2) << "Calculator says: Your tax comes out to " << tax << endl;
			cout << fixed << setprecision(2) << "Calculator says: Income subtracting tax is " << newIncome << endl;
		}
		else {
		cout << "Calculator says: Number input error. You've figured out how to get past the paramiters";
		}

		cout << "Do you want to calculate taxes again? (type [y]/[n]): ";
        cin >> repeat;
	} 

    //using a do-while loop to repeat the program, and breaking the loop if user does not want to continue
    while (repeat == 'y' || repeat == 'Y');

    return 0;
}