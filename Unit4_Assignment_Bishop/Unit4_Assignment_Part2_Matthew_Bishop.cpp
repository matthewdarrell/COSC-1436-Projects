// Dr_T numbers with ordinals C++ Bishop
// Date: 02/09/20 IDE: Visual Studio Code
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char* argvx[]) 
{
  int inputNumber = 0;
  string postfix = "";

  inputNumber = atoi(argvx[1]);

  for (int i = 1; i <= inputNumber; i++)
  {
    if (i / 10 == 1)
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
    cout << i << postfix << " Hello" << endl;
  }

  cout << inputNumber;

  return 0;
}