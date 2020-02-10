// Dr_T does some math C++ Bishop
// Date: 02/09/20 IDE: Visual Studio Code
#include <iostream>
#include <math.h>
#include "Input_Validators.h"
using namespace std;

int main() 
{
  // declare variables
  double input = 0.0, square = 0.0, quotient = 0.0;
  double result = 0.0, result2 = 0.0;
  int iter = 0;

  while (true) // moved check lower in code because it finished loop instead of breaking out.
  {
    // input
    cout << "\nPlease enter any number to be used in multiple calculations (-1 to exit): ";
    input = getValidDouble(); // test character j prompts again for double to be entered
    
    if (input == -1) // did a check here because it was processing -1 before exiting the loop.
      break;

    // process
    square = pow(input, 2);

    quotient = input / input; // if input == 0, nan will be returned. 

    // (n+3)/5
    result = (input + 3.0) / 5.0;

    // [ ( (n+3)/5 ) + ( (n+7)/2 ) ]
    result2 = result + ((input + 7.0) / 2.0);

    // output
    cout << "\nThe square of " << input << " is " << square << endl;
    cout << input << " / " << input << " = " << quotient << endl;
    cout << "(" << input << " + 3) / 5" << " = " << result << endl;
    cout << "[ ( (" << input << " + 3) / 5 ) + ( (" << input << " + 7) / 2 ) ]" << " = " << result2 << endl;
    
    iter++;
  }

  cout << "\n" << iter << " numbers processed.\r\nGoodbye." << endl;

  return 0;
}