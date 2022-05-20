//IT20657314 - R,sujeevan - MLB_07.01.11
//Bus.h
#include <string>

using namespace std;

class Bus {
  private:
    string strBusId;
    string strBusCategoryId;
    string strBusRouteId;

  public:
    Bus();
    Bus(string busId, string busCategoryId, string busRouteId);
    void storeBusDetails();
    void addBusSchedules();
    void viewBusDetails();
    ~Bus();
}