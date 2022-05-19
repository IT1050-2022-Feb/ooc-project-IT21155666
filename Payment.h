//IT21156724 - W.G.P.Shehani - MLB_07.01.11

//Payment.h

#include<iostream>
using namespace std;

class Payment{
	private:
		char paymentID[10];
		char paymentType[20];
		char userID[8];
		char paymentDate[12];
		char paymentAmount[10];
		
	public:
		Payment();
	  Payment(char const payID[], char const payType[], char    const uID[], char const payDate[], char const payAmount[]);
		void getPaymentDetails();
		void calculatePayment();
		void validatePayment();
		void displayPaymentDetails();
};