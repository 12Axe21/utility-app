#include <iostream>
#include <string>
using namespace std;
int main() {

	cout << "Welcome To The Vending Machine!" << endl;
	cout << "What Snack Would You Want?" << endl;
	
	int UserSnack;
	double UserMoney;
	double MoneyLeft;
	bool SnackLoop = true;
	while (SnackLoop) {
	cout << "1. Bounty" << endl;
	cout << "2. m&m" << endl;
	cout << "3. oreo's" << endl;
	cout << "4. Aero" << endl;
	cout << "5.Galaxy" << endl;
	cout << "6. ready salted walkers" << endl;
	cout << "7. Macoys Flame Grilled Steak" << endl;
	cout << "8. Doritos Chilli Heatwave" << endl;
	cout << "9. Pom-bear originals" << endl;
	cout << "10.Mcoys Salt And Vinegar" << endl;

	cout << "What snack do you want./n" << endl;
	cin >> UserSnack;
	
	
		if (UserSnack == 1) {
			cout << "you have bought a Bounty, that will be £1.20" << endl;
			cin >> UserMoney;
			if (UserMoney >= 1.20) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 1.20;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 2) {
			cout << "you have bought m&m's , that will be £1" << endl;
			cin >> UserMoney;
			if (UserMoney >= 1.0) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 1.0;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 3) {
			cout << "you have bought Oreo's, that will be £1.50" << endl;
			cin >> UserMoney;
			if (UserMoney >= 1.50) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 1.50;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 4) {
			cout << "you have bought an Aero, that will be £1.20" << endl;
			cin >> UserMoney;
			if (UserMoney >= 1.20) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 1.20;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 5) {
			cout << "you have bought a Galaxy bar that will be £1.20" << endl;
			cin >> UserMoney;
			if (UserMoney >= 1.50) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 1.20;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 6) {
			cout << "you have bought ready salted walkers, that will be £2" << endl;
			cin >> UserMoney;
			if (UserMoney >= 2) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 2;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {    
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 7) {
			cout << "you have bought Mcoys flame grilled steak, that will be £2" << endl;
			cin >> UserMoney;
			if (UserMoney >= 2) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 2;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 8) {
			cout << "you have bought a Doritos Chili Heatwave, that will be £2" << endl;
			cin >> UserMoney;
			if (UserMoney >= 2) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 2;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 9) {
			cout << "you have bought Pom-Bear Originals, that will be £2" << endl;
			cin >> UserMoney;
			if (UserMoney >= 2) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 2;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}if (UserSnack == 10) {
			cout << "you have bought Mcoys Salt And Vinegar, that will be £2" << endl;
			cin >> UserMoney;
			if (UserMoney >= 2) {
				cout << "Thanks for purchasing!" << endl;
				MoneyLeft = UserMoney - 2;
				cout << "You have" << endl;
				cout << MoneyLeft << endl;
				cout << "left" << endl;
			}
			else {
				cout << "Insufficiant funds" << endl;
			}
		}

		cout << "Would You like another Snack? (Y/N)" << endl;
		char UserInput;

		cin >> UserInput;
		if (UserInput == 'y') {
			cout << "OK thanks here's the snack menu" << endl;
			cout << "You have ";
			cout << MoneyLeft;
			cout << " left." << endl;

		}
		if (UserInput == 'n') {
			SnackLoop = false;
			
			cout << "Understood"<< endl;
		}
	}
	
	//Drinks
	bool DrinkLoop =  true;
	while (DrinkLoop) {
		cout << "would you like anything to get a drink?(y/n)" << endl;
		char Drink;
		cin >> Drink;

		if (Drink == 'n') {

			cout << "Got it, thanks for using the vending machine.";
			return 0;
		}
		if (Drink == 'y') {
			cout << "Ok, here are the drinks menu" << endl;
		}

		cout << "1.Coca Cola" << endl;
		cout << "2.Fanta" << endl;
		cout << "3.Dr. Pepper" << endl;
		cout << "4.Lipton ice tea" << endl;
		cout << "5.Pepsi" << endl;
		cout << "6.Monster" << endl;
		cout << "7.Mountain Dew" << endl;
		cout << "8.Evian water" << endl;
		cout << "9.Rio" << endl;
		cout << "10.Sprite" << endl;

		int UserDrink;
		double Money2;
		double Money3;
		cout << "What drink do you want?/n" << endl;
		cin >> UserDrink;
		if (UserDrink == 1) {
			cout << "You Have purchased a Coca Cola" << endl;
			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 2) {
			cout << "You Have purchased a Fanta" << endl;
			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 3) {
			cout << "You Have purchased a Dr.Pepper" << endl;
			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 4) {
			cout << "You Have purchased Lipton ice tea" << endl;

			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 5) {
			cout << "You Have purchased a Pepsi" << endl;

			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 6) {
			cout << "You Have purchased Monster" << endl;

			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 7) {
			cout << "You Have purchased Mountain Dew" << endl;

			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 8) {
			cout << "You Have purchased a Evian water" << endl;

			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 9) {
			cout << "You Have purchased a Rio" << endl;

			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		if (UserDrink == 10) {
			cout << "You Have purchased a Sprite" << endl;

			cout << "That will be £1.20" << endl;
			cout << "Thanks for Purchasing." << endl;
			if (MoneyLeft >= 1.20) {
				cout << "Thanks for Purchasing." << endl;
			}
			if (MoneyLeft < 1.20) {
				cout << "Please add the money" << endl;
				cin >> Money2;
				Money3 = Money2 + MoneyLeft;
				if (Money3 >= 1.20) {
					cout << "Thanks for Purchasing." << endl;
				}if (Money3 < 1.20) {
					cout << "Insufficient funds" << endl;
				}
			}
		}
		char DrinkOption;
		cout << "Would You Like another Drink?y/n" << endl;
		cin >> DrinkOption;

		if (DrinkOption == 'y') {
			cout << "Please Order another Drink" << endl;
		}
		if (DrinkOption == 'n') {
			cout << "thanks for using the vending machine" << endl;
			DrinkLoop == false;
		}
		

	}


	return 0;
}
				