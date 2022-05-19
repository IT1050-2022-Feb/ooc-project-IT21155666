//Management Assistant.h
//IT21155666 - Perera B.S.M. - MLB_07.01_11
#include<iostream>
using namespace std;

class Management_Assistant{
	private:
		string strstaffId;
		string strEmail;
		string strPassword;
		
	public:
		Management_Assistant();
		Management_Assistant(string staffId, string email, string password);
		void updateBusAvailability();
		void generateBookingReport();
		void displayMADetails();
		~Management_Assistant();
};