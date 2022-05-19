//IT21156724 - W.G.P.Shehani - MLB_07.01.11

//Unregisterd_Guset_User.h

#include<iostream>
using namespace std;

class Unregisterd_Guset_User{
	private:
		char name[30];
		char NIC[12];
		char address[40];
		char contactNo[12];
		char email[20];	
		char dateOfBirth[8];
	public:
		Unregisterd_Guset_User();
	  Unregisterd_Guset_User(char const username[], char const uNIC[], char const uAddress[], char const uContactNo[], char const uEmali[], char const dob[]);
		void displayUnregiserdDetails();
		void getUnregiserdDetails();
};
