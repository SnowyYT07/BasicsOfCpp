#include <iostream>

int main()
{
	// switch is an alternative for using multiples "else if" statements
	// compare one value against matching cases
	int year;
   std::cout << "Enter the month (2000-2005): ";
   std::cin >> year;
	switch(year){
		case 2000:
		std::cout << "You selected the year 2000";
		break;
      case 2001:
      std::cout << "You selected the year 2001";
      break;
      case 2002:
      std::cout << "You selected the year 2002";
      break;
      case 2003:
      std::cout << "You selected the year 2003";
      break;
      case 2004:
      std::cout << "You selected the year 2004";
      break;
      case 2005:
      std::cout << "You selected the year 2005";
      break;
		default:
			std::cout << "You typed a value out of range(2000-2005)";
	}

	return 0;
}
