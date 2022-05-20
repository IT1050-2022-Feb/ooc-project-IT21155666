//IT20657314 - R.sujeevan- MLB_07.01.11
//Report.h
#include <string>

using namespace std;

class Report {
  private:
    string strReportId;
    string strReportType;

  public:
    Report();
    Report(string reportId, string reportType);
    void viewBookingReservationReport();
    void viewSystemReport();
    ~Report();
}