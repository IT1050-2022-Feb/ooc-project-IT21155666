//IT20657314 - R.sujeevan- MLB_07.01.11
//Bus.cpp
#include <iostream>

//Include header with string & namespace std 
#include "Bus.h"

Bus::Bus() {
 cout << "Default Constructor Bus() called" << endl;
}

Bus::Bus(string busId, string busCategoryId, string busRouteId)
{
 strBusId = busId;
 strBusCategoryId = busCategoryId;
 strBusRouteId = busRouteId;
}

void Bus::storeBusDetails()
{
  cout << "Store bus details" << endl;
  cout << "Bus Id: " << strBusId << endl;
  cout << "Bus Category Id: " << strBusCategoryId << endl;
  cout << "Bus Route Id: " << strBusRouteId << endl;
}

void Bus::addBusSchedules()
{
  cout << "Add bus schedules" << endl;
}

void Bus::viewBusDetails()
{
  cout << "View bus schedules" << endl;
}

Bus::~Bus()
{
  cout << "Destructed Bus()" << endl;
}