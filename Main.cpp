//main.cpp
//MLB_07.01_11
#include<iostream> //Including Header files 
#include<string>
#include "Admin.h"
using namespace std; 

int main(){
  //Creating dynamic objects
	Admin *Admin01 = new Admin("Ad0001","dhanuka.admin@gmail","Admin@#$987"); 
	Admin *Admin02 = new Admin("Ad0002","shehan.admin@gmail","Admin@#$654");
	
	cout<<"--------Admin Details--------"<<endl<<endl; //prompt
	
	Admin01->displayAdminDetails();
	Admin02->displayAdminDetails();
  
  //Creating dynamic objects 
  	Management_Assistant *MA01 = new Management_Assistant("MA0001","Kasun.MA@gmail","MA@#$987");
	Management_Assistant *MA02 = new Management_Assistant("MA0002","shehan.MA@gmail","MA@#$654");
	
	cout<<"--------Management_Assistant Details--------"<<endl<<endl; //prompt
	
	MA01->displayMADetails();
	MA02->displayMADetails();
	
	return 0; //return statement 
	
}
