//IT20657314 - R.sujeevan- MLB_07.01.11
//Report.cpp
#include <iostream>

//Include header with string & namespace std 
#include "Report.h"

Report::Report() {
 cout << "Default Constructor Report() called" << endl;
}

Report::Report(string reportId, string reportType)
{
 strReportId = reportId;
 strReportType = reportType;
}

void Report::viewBookingReservationReport()
{
  cout << "View booking reservation report" << endl;
  cout << "Report Id: " << strReportId << endl;
  cout << "Report Type: " << strReportType << endl; //Report type = booking reservation
}

void Report::viewSystemReport()
{
  cout << "View system reports" << endl;
  cout << "Report Id: " << strReportId << endl;
  cout << "Report Type: " << strReportType << endl; //Report type = system report
}

Report::~Report()
{
  cout << "Destructed Report()" << endl;
}