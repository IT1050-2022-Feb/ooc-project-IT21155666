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
	

//IT21156724 - W.G.P.Shehani - MLB_07.01.11
//Creating static objects
cout<<"-----Unregistered Guset User----- " <<endl<<endl;
	
	Unregisterd_Guset_User UU1("Dhanuka", "938855666V", "Matara", "0702222222", "dhanu2010@gmail.com", "1993/11/25");
    UU1.displayUnregiserdDetails(){}
	
	Unregisterd_Guset_User UU2("Shehani", "949998885V", "Galle", "0777777777", "shenu94@gmail.com", "1994/02/02");
    UU2.displayUnregiserdDetails();
    
    Unregisterd_Guset_User UU3("Yenuja", "2000996666", "Colombo", "075000000", "yenu@email.com.com", "2000/03/09");
    UU3.displayUnregiserdDetails();
    
    Unregisterd_Guset_User UU4("Sadew", "199952541V", "Malabe", "0715556624", "sadew@gmail.com", "1999/11/04");
    UU4.displayUnregiserdDetails();
    
    Unregisterd_Guset_User UU5("Isuru", "923222222V", "Rathnapura", "0762225522", "isure@yahoo.com", "1992/11/19");
    UU5.displayUnregiserdDetails();
  

//IT21156724 - W.G.P.Shehani - MLB_07.01.11
//Creating static objects
  	cout<<"----------Registered User---------- " <<endl<<endl;
		
	Registerd_User RU1("RU001", "nethu@email.com", "*8888*");
    RU1.diaplayRegisterdDetails();
			
	Registerd_User RU2("RU002", "sayuri10@gmail.com", "ss123");
    RU2.diaplayRegisterdDetails();
    		
	Registerd_User RU3("RU003", "gamage@yahoo.com", "121212");
    RU3.diaplayRegisterdDetails();
    		
	Registerd_User RU4("RU004", "dilka@gmail.com", "hhijk");
    RU4.diaplayRegisterdDetails();
    		
	Registerd_User RU5("RU005", "shehana99@email.com", "iii**uuu");
    RU5.diaplayRegisterdDetails();
  
    
//IT21156724 - W.G.P.Shehani - MLB_07.01.11
//Creating dynamic objects
  cout<<"-----Payment----- " <<endl<<endl;
	
	Payment * P1 = new Payment("P11111", "Debit Card", "RU001", "2022/04/21", "Rs:3000");
	
	Payment * P2 = new Payment("P88888", "Payoneer", "RU002", "2022/05/15", "Rs:5000");
    
    
  Payment * P3 = new Payment("P44444", "Paypal", "RU003", "2021/12/13", "Rs:8200");
    
  Payment * P4 = new Payment("P77777", "Debit Card", "RU004", "2022/03/03", "Rs:1500");
    
    
  Payment * P5 = new Payment("P55555", "Debit Card", "RU005", "2022/04/11", "Rs:6500");
    
	P1->displayPaymentDetails();
	P2->displayPaymentDetails();
	P3->displayPaymentDetails();
	P4->displayPaymentDetails();
	P5->displayPaymentDetails();
	
  return 0; //return statement
	
}

//IT20657314 - R.sujeevan- MLB_07.01.11
//main.cpp
#include <iostream>
#include <string>

//Include Bus.cpp & Report.cpp with headers
#include "Bus.cpp"
#include "Report.cpp"

using namespace std;

int main() {

  //-----Creating dynamic bus objects--------------------
  Bus* bus1 = new Bus("BUS001", "BUSCAT001", "BUSRT001");
  Bus* bus2 = new Bus("BUS002", "BUSCAT002", "BUSRT002");

  //-----Example method callings of bus object-----------
  bus1->storeBusDetails();
  bus2->addBusSchedules();
  bus1->viewBusDetails();
  
  //-----Creating dynamic report objects-------------------------
  Report* bookingReport = new Report("REP001", "REPTYPEBOOKING");
  Report* systemReport = new Report("REP002", "REPTYPESYSTEM");

  //-----Example method callings of bus object-----------
  bookingReport->viewBookingReservationReport();
  systemReport->viewSystemReport();

  cout << "Main file finished.\n";
  return 0;
  
}