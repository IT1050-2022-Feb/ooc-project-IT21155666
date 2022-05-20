//S.S.Withanachchi-IT21156588 MLB_07.01M
//ticket.cpp

#include <iostream>

using namespace std;
	
	Ticket::Ticket(){}
	Ticket::Ticket()
	{
		strTicketId = tickedId;
		strTicketCategoryId = ticketCategoryId;
		dtmDate =  date;
		dblAmount = amount;
	}
	void Ticket::recieveTicketNumber(){}
	void Ticket::veiwTicketDetails(){
		
		cout<<"Ticket Id"<<strTicketId<<endl;
		cout<<"Ticket category Id"<<strTicketCategoruId<<endl;
		cout<<" date"<<dtmDate<<endl;
		cout<<" amount"<<dblAmount;
		
	}