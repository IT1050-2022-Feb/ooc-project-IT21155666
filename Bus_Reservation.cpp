	//S.S.Withanachchi-IT21156588 MLB_07.01M
	//Busreservation.cpp
	
	#include <iostream>

	using namespace std;
	
	BusReservation::BusReservation(){}
	BusReservation::BusReservation()
	{
		strReservationId = reservationId;
		strBusId =  busId;
		strPassengerName =  passengerName;
		dtmDate = date;
		dblAmount = amount;	
	}
	void BusReservation::checkBusAvailabilty(){}
	void BusReservation::enterPassengerDetails(){}
	void BusReservation::confirmReservation(){}
	void BusReservation:: cancelBokking(){
		
		cout<<"Reservation Id"<<strReservationId<<endl;
		cout<<"Bus Id"<<strBusId<<endl;
		cout<<"passenger name"<<strPassengerName<<endl;
		cout<<"Date"<<dtmDate<<endl;
		cout<<"Amount"<<dblAmount<<endl;
	}
	