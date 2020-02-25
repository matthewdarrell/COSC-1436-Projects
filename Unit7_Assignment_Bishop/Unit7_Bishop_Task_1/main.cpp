// program Dr_T C++ Bishop
// Date: 2/24/20 IDE: VS Code
#include <iostream>

using namespace std;

// declare structs
struct timeOfDay {
  short Hour;
  short Minute;
  short Second;
};

struct appDate {
  short dayofMonth;
  short month;
  int year;
};

struct event {
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
};

int main() 
{
  timeOfDay time = {23, 59, 59};
  appDate date = {12, 31, 1999};
  event event = {"Armageddon (Y2k)", time, date, true};

  cout << "EventName: " << event.eventName << endl;

  cout << "EventDate: " << event.eventDate.dayofMonth << "/" 
                        << event.eventDate.month << "/" 
                        << event.eventDate.year << endl;

  cout << "EventTime: " << event.eventTime.Hour << ":" 
                        << event.eventTime.Minute << ":" 
                        << event.eventTime.Second << endl;

  cout << "IsUrgent: " << (event.isUrgent ? "yes" : "no") << endl;

  return 0; // successful exit
}