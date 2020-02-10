// Dr_T numbers with ordinals C++ Bishop
// Date: 02/09/20 IDE: Visual Studio Code
#include <iostream>
#include "Input_Validators.h"
#include <math.h>
using namespace std;

int main() 
{
  // declare variables
  int inputNumber = 0;
  string postfix = "";
  
  // input
  cout << "Please enter a number: ";
  inputNumber = getValidInt();
  
  // process
  for (int i = 1; i <= inputNumber; i++)
  {
    if ((i % 100) / 10 == 1)
    {
      postfix = "th";
    }
    else if (i % 10 == 1)
    {
      postfix = "st";
    }
    else if (i % 10 == 2)
    {
      postfix = "nd";
    }
    else if (i % 10 == 3)
    {
      postfix = "rd";
    }
    else
    {
      postfix = "th";
    }
    
    // output
    cout << i << postfix << " Hello" << endl;
  }
  
  // output
  cout << inputNumber;

  return 0;
}
