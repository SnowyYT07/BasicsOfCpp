#include <iostream>
#include <ctime>
int main()
{
   using namespace std;

   int num;
   int guess;
   int tries = 3;

   srand(time(NULL));
   num = (rand() % 10) + 1;

   cout << "******** Number Guessing Game ********\n";
   cout << "*****Enter a guess between (1-10)*****\n";
   cout << "**************************************\n";

   do {
      cout << "***> ";
      cin >> guess;
      if(guess == num){ cout << "You won!"; break; }
      else {
         tries--;
         if(tries > 0){ cout << "\nWrong guess! Try again! Number of tries left: " << tries << '\n'; }
         else{cout << "\nOut of tries. The correct number was: " << num << '\n';}
      }
   }while(tries > 0);

   return 0;
}
