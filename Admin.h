//Admin.h
//IT21155666 - Perera B.S.M. - MLB_07.01_11
#include<iostream>
using namespace std;
class Admin{
	private:
		string strstaffId;
		string strEmail;
		string strPassword;
	public:
		Admin();
		Admin(string staffId, string staffEmail, string staffPassword);
		void login();
		void updateUserDetails(); 
		void maintainInquiries();
		void displayAdminDetails();
		~Admin();		
};