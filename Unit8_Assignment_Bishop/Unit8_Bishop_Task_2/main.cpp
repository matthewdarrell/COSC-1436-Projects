// program Dr_T C++ Bishop
// Date: 2/24/20 IDE: VS Code
#include "car.h"

void printCar(car *);
void preserveData(car &);

int main() 
{
  car jeep = {"Jeep", "Wrangler", 2015};
  car ford = {"Ford", "F-150", 2005};
  car toyota = {"Toyota", "Corolla", 2001};
  
  printCar(&jeep);
  printCar(&ford);
  printCar(&toyota);

  preserveData(jeep);
  preserveData(ford);
  preserveData(toyota);
  return 0; // successful exit
}

void printCar(car *c)
{
  c->Color = c->Year > 2010 ? "Green" : "Red";
  cout << "Make: " << c->Make << endl <<
          "Model: " << c->Model << endl << 
          "Year: " << c->Year << endl << 
          "Color: " << c->Color << "-ish" << endl;
}

void preserveData(car &c)
{
  car *p_car = &c;
  new(p_car) car;
  printCar(p_car);
  new(p_car) car();
  printCar(p_car);
}
