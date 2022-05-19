//Admin.cpp
//IT21155666 - Perera B.S.M. - MLB_07.01_11
#include<iostream> //Including Header files 
#include<string>
#include "Admin.h"
using namespace std; 

//Implementing Class - Admin methods
Admin::Admin(){}

Admin::Admin(string staffId, string staffEmail, string staffPassword){
	strstaffId = staffId;
	strEmail = staffEmail;
	strPassword = staffPassword;
}
void Admin::login(){
	
}
void Admin::updateUserDetails(){
	
}
void Admin::maintainInquiries(){
	
}
void Admin::displayAdminDetails(){
	cout << "Admin Id : " << strstaffId <<endl;
	cout << "Admin Email : " << strEmail <<endl;
	cout << "Admin Password : " << strPassword <<endl;
	cout <<endl;
}
