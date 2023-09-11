#include <iostream>
#include <iomanip>



double showBalance(double balance)
{
	std::cout << "Balance: " << std::setprecision(2) << std::fixed << balance << "$\n";
}

double deposit()
{
	double amount = 0;

	std::cout << "Enter the amount to deposit: ";
	std::cin >> amount ;

	if(amount > 0){return amount;}
	else{std::cout << "Thats an invalid amount\n"; return 0;}
}

double withdraw(double balance)
{
	double amount = 0;

	std::cout << "Enter the amount to withdrawn:	";
	std::cin >> amount;

	if(amount > balance){std::cout << "Insuficient funds\n"; return 0;}
	else if(amount < 0){std::cout << "Thats an invalid amount\n"; return 0;}
	else{return amount;}
}


int main()
{
	using namespace std;
	double balance = 0;
	int choice;

	do {
      cout << "*****************\n";
      cout << "Enter your choice\n";
      cout << "*****************\n";
      cout << "1. Show Balance\n";
      cout << "2. Withdraw money\n";
      cout << "3. Deposit money\n";
      cout << "4. Exit\n";
      cout << "> ";
      cin >> choice;

		cin.clear();
      fflush(stdin);


		switch(choice){
			case 1:	showBalance(balance);
						break;
			case 2:	balance -= withdraw(balance);
						showBalance(balance);
						break;
			case 3:	balance += deposit();
						showBalance(balance);
						break;
			case 4:	cout << "Good bye!\n";
						break;
			default: cout << "invalid option!! \n"; break;
		}

	}while(choice != 4);


	return 0;
}
