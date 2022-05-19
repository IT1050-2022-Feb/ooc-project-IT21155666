//IT21156724 - W.G.P.Shehani - MLB_07.01.11

//Registerd_User.h

#include<iostream>
using namespace std;

class Registerd_User{
	private:
		char userID[8];
		char email[20];
		char password[10];
	public:
		Registerd_User();
	  Registerd_User(char const ID[], char const uEmail[], char const upw[]);
		void diaplayRegisterdDetails();
		void getRegisterdDetails();	
};