// program Dr_T C++ Bishop
// Date: 2/24/20 IDE: VS Code
#include <iostream>

#include "Input_Validators.h"
#include "event.h"

using namespace std;

int main() 
{
  timeOfDay time;
  appDate date;
  event event;

  time.Hour = getValidShort("Please enter a number for the event time's hour: ");
  time.Minute = getValidShort("Please enter a number for the event time's minute: ");
  time.Second = getValidShort("Please enter a number for the event time's second: ");

  date.dayofMonth = getValidShort("Please enter a number for the event date's day: ");
  date.month = getValidShort("Please enter a number for the event date's month: ");
  date.year = getValidInt("Please enter a number for the event date's year: ");

  event.eventName = getValidString("Please enter a name for the event: ");
  event.eventDate = date;
  event.eventTime = time;
  event.isUrgent = getValidBool("Please enter if this is an urgent event: ");

  cout << event.toString();

  return 0; // successful exit
}