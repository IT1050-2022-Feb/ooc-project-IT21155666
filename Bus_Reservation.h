	//S.S.Withanachchi-IT21156588 MLB_07.01M
	//Busreservation.h
	
#include <iostream>

using namespace std;
	
	class BusReservation
	{
		private:
			string strReservationId;
			string strBusId;
			string strPassengerName;
			string dtmDate;
			double dblAmount;
			
		public:
	 		BusReservation();
	 		BusReservation(string reservationId,string busId,string passengerName,string date,double amount);
	 		void checkBusAvailabilty();
	 		void enterPassengerDetails();
	 		void confirmReservation();
	 		void cancelBokking();
	 		~BusReservation();
			
	}