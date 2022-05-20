//S.S.Withanachchi-IT21156588 MLB_07.01M
//ticket.h

#include <iostream>

using namespace std;


	Class Ticket
	{
		private:
			string strTicketId;
			string strTicketCategoryId;
			string dtmDate;
			double dblAmount;
			
		public:
			Ticket();
			Ticket(string tickedId,string ticketCategoryId,string date,double amount);
			void recieveTicketNumber();
			void veiwTicketDetails();
	    	~Ticket();		
	}