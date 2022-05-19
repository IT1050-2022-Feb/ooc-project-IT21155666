//Management_Assistant.cpp
//IT21155666 - Perera B.S.M. - MLB_07.01_11
#include<iostream> //Including Header files 
#include<string>
#include "Management_Assistant.h"
using namespace std; 

//Implementing Class - Management_Assistant methods
Management_Assistant::Management_Assistant(){}
Management_Assistant::Management_Assistant(string staffId, string email, string password){
	strstaffId = staffId;
	strEmail = email;
	strPassword = password;
}
void Management_Assistant::updateBusAvailability(){
	
}
void Management_Assistant::generateBookingReport(){
	
}
void Management_Assistant::displayMADetails(){
	cout << "Management Assistant Id : " << strstaffId <<endl;
	cout << "Management Assistant Email : " << strEmail <<endl;
	cout << "Management Assistant Password : " << strPassword <<endl;
	cout <<endl;
}