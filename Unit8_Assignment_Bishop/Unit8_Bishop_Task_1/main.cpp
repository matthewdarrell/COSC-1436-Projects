// program Dr_T C++ Bishop
// Date: 2/24/20 IDE: VS Code
#include "car.h"

void printCar(car *);

int main() 
{
  car jeep = {"Jeep", "Wrangler", 2015};
  car ford = {"Ford", "F-150", 2005};
  car toyota = {"Toyota", "Corolla", 2001};
  
  printCar(&jeep);
  printCar(&ford);
  printCar(&toyota);

  return 0; // successful exit
}

void printCar(car *car)
{
  car->Color = car->Year > 2010 ? "Green" : "Red";
  cout << "This car is a " << car->Year << " " << car->Make << " " << car->Model << " that is a " << car->Color << "-ish color." << endl;
}
