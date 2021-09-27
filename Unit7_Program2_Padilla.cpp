#include <iostream>
#include <string> 
using namespace std;

struct timeOfDay {
  short hour;
  short minute;
  short second;

};

struct appDate {
  short dayOfMonth;
  short month;
  int year;
};

struct Event {
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
};


bool isEventUrgent;

int main() {

  timeOfDay timeofday;
  timeofday.hour = 3;
  timeofday.minute = 30;
  timeofday.second = 0;




appDate appdate;
  appdate.dayOfMonth = 10;
  appdate.month = 1;
  appdate.year = 2021;

  Event events;
  events.eventName = "Party ";
  events.eventTime =  timeofday;
  
  cout<<events.eventName<<endl;
  
  cout<<"Time of party "<<timeofday.hour<<":"<<timeofday.minute<<"."<<timeofday.second<<endl;

  cout<<"Date is "<<appdate.month<<"/"<<appdate.dayOfMonth<<"/"<<appdate.year<<endl;
 
cout<<"Is the Event urgent? "<<endl;
cout<<"yes "<<endl;
}