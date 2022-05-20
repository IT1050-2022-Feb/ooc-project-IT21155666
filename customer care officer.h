//Customer Care Officer.h
//IT21157578- A.H.S Dilsara- MLB_07.01_11
#include<iostream>
using namespace std;

class CustomerCare_Officer{
 
	 private:
	   string      	strStaffId; 
     string          strEmail; 
     string         strPassword;
    
    public:
    CustomerCare_Officer();
    CustomerCare_Officer(string staffId, string email, string password);
    void updateUserDetails();
	void maintainInquiries();
	~CustomerCare_Officer(); 
};