// program Dr_T C++ Bishop
// Date: 2/20/20 IDE: VS Code
#include <iostream>
#include "accounts.h"

using namespace std;

void sortIntArray(int[], int);
void printArray(int[], int);

int main() 
{
  cout << "\nStart: " << cpuTime() << endl; 

  //sortIntArray(accountBalances, sizeof(accountBalances) / sizeof(int));
  sort(accountBalances, accountBalances+maxAccounts);
  reverse(accountBalances, accountBalances+maxAccounts);
  printArray(accountBalances, maxAccounts);

  cout << "\nEnd: " << cpuTime() << endl;

  return 0; // successful exit
}

void sortIntArray(int array[], int size)
{
  bool sorted = false;
  while (!sorted)
  {
    sorted = true;
    for (int i = 0; i < size; i++)
    {
      if (array[i] > array[i+1])
      {
        int previous = array[i];
        array[i] = array[i+1];
        array[i+1] = previous;
        sorted = false;
      }
    }
  }
  printArray(array, size);
}

void printArray(int array[], int size)
{
  cout << "\n[";
  for (int i = 0; i < size; i++)
  {
    cout << (i == 0 ? "" : ", ") << array[i]; 
  }
  cout << "]" << endl;;
}
