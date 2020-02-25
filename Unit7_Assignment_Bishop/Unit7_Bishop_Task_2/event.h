// program Dr_T C++ Bishop
// Date: 2/24/20 IDE: VS Code
#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <sstream>

#include "timeOfDay.h"
#include "appDate.h"

using namespace std;

struct event {
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;

  string toString()
  {
    stringstream ss;
    ss << eventDate.month << "/" 
       << eventDate.dayofMonth << "/" 
       << eventDate.year;

    stringstream ss2;
    ss2 << eventTime.Hour << ":"
        << eventTime.Minute << ":"
        << eventTime.Second;

    return "Name: " + eventName + "\r\n" +
           "Date: " + ss.str() + "\r\n" +
           "Time: " + ss2.str() + "\r\n" +
           "Is Urgent: " + (isUrgent ? "Yes" : "No") + "\r\n";
  }
};

ostream& operator<< (ostream& outs, event* obj)
{
  return outs << obj -> toString();
}

#endif