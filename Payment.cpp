//IT21156724 - W.G.P.Shehani - MLB_07.01.11

//Payment.cpp

#include<iostream>
//Including Header files
#include<cstring>
#include"Payment.h"
using namespace std;

//Implementing Class - Payment methods
Payment::Payment(){}

Payment::Payment(char const payID[], char const 
  payType[], char const uID[], char const payDate[], char const payAmount[]){
  strcpy(paymentID, payID);
	strcpy(paymentType,  payType);
	strcpy(userID, uID); 
	strcpy(paymentDate, payDate);
	strcpy(paymentAmount,  payAmount);
}

void Payment:: calculatePayment(){

}

void Payment:: validatePayment(){

}

void Payment::displayPaymentDetails(){
	cout<<"Payment ID : " << paymentID  <<endl;
  cout<<"Payment Type : " << paymentType <<endl;
	cout<<"User ID : "<< userID <<endl;
	cout<<"Payment Date : " << paymentDate <<endl;
  cout<<"Payment Amount : " << paymentAmount <<endl;
  cout<<endl; 
}
