//IT21156724 - W.G.P.Shehani - MLB_07.01.11

//Unregisterd_Guset_User.cpp

#include<iostream>
#include<cstring>
#include "Unregisterd_Guset_User.h"
using namespace std;

Unregisterd_Guset_User::Unregisterd_Guset_User();

Unregisterd_Guset_User::Unregisterd_Guset_User(char const username[], char const uNIC[], char const uAddress[], char const uContactNo[], char const uEmali[],char const dob[]){
  strcpy(name, username);
	strcpy(NIC, uNIC);
  strcpy(address, uAddress);
	strcpy(contactNo, uContactNo);
	strcpy(email, uEmali);	
	strcpy(dateOfBirth, dob);
}

void Unregisterd_Guset_User::displayUnregiserdDetails(){
	cout<<"Name : "<< name <<endl;
	cout<<"NIC : " << NIC <<endl;
  cout<<"Address : " << address <<endl;
  cout<<"Contact No : "<< contactNo <<endl;
  cout<<"Email : " << email <<endl;
  cout<<"Date Of Birth : "<< dateOfBirth <<endl;
  cout<<endl;
}

void Unregisterd_Guset_User::getUnregiserdDetails(){
	
}