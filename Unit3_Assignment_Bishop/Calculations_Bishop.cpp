// program Dr_T Calculations C++ Bishop
// Date: 02/02/20 IDE: Visual Studio Code
#include <iostream>
#include "Input_Validators.h"
using namespace std;

int main() 
{
  // declare variables
  double number1 = 0.0, number2 = 0.0, addition = 0.0;
  double subtraction = 0.0, multiplication = 0.0;
  double division = 0.0, modulus = 0.0;
  int number3 = 0, number4 = 0;

  // input
  cout << "\nPlease enter number1: ";
  number1 = getValidDouble();
  while (number2 == 0.0)
  {
    cout << "\nPlease enter number2 not equal to 0.0: ";
    number2 = getValidDouble();
    if (number2 == 0)
      cout << "Division by 0 is not permitted by math.\n";
  }
  cout << "\nPlease enter number3: ";
  number3 = getValidInt();
  while (number4 == 0)
  {
    cout << "\nPlease enter number4 not equal to 0: ";
    number4 = getValidInt();
    if (number4 == 0)
      cout << "Division by 0 is not permitted by math.\n";
  }

  // process
  addition = number1 + number2;
  subtraction = number1 - number2;
  multiplication = number1 * number2;
  division = number1 / number2;
  modulus = number3 % number4;

  // output
  cout << "\n";
  cout << "number1 + number2 = " << addition << endl;
  cout << "number1 - number2 = " << subtraction << endl;
  cout << "number1 * number2 = " << multiplication << endl;
  cout << "number1 / number2 = " << division << endl;
  cout << "number3 % number4 = " << modulus << endl;

  return 0;
}