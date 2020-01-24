// program Dr_T DataTypes C++ Bishop
// Date: 1/23/20 IDE: Visual Studio Code
#include <iostream>
using namespace std;

int convertPennies(int& pennies, int currency)
{
  int result = pennies / currency;
  pennies = pennies % currency;
  return result;
}

int main() 
{
  // declare variables
  int dollars = 0, quaters = 0, dimes = 0, nickles = 0, pennies = 0, convertAgain = 1;
  const int DOLLAR = 100, QUATER = 25, DIME = 10, NICKLE = 5;
  
  while(convertAgain == 1)
  {
    // input
    cout << "\nPlease enter an amount of pennies to be converted into dollars and other coin values: ";
    cin >> pennies;
    
    // process
    dollars = convertPennies(pennies, DOLLAR);
    quaters = convertPennies(pennies, QUATER);
    dimes = convertPennies(pennies, DIME);
    nickles = convertPennies(pennies, NICKLE);

    // output
    cout << "\nCongratulations! You have:" << 
            "\nDollars = " << dollars  << 
            "\nQuaters = " << quaters << 
            "\nDimes = " << dimes << 
            "\nNickels = " << nickles << 
            "\nPennies = " << pennies << endl;

    cout << "\nWould you like to perform another conversion? Enter 1 for yes, 2 for no: ";
    cin >> convertAgain;
  }
  
  return 0; // successful exit
}