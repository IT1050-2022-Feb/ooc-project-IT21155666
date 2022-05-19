//IT21156724 - W.G.P.Shehani - MLB_07.01.11

//Registerd_User.cpp

#include<iostream>
#include<cstring>
#include "Registerd_User.h"
using namespace std;

Registerd_User::Registerd_User(){}

Registerd_User::Registerd_User(char const ID[], char const uEmail[], char const upassword[]){
    strcpy(userID, ID);
	strcpy(email, uEmail);
	strcpy(password, upassword);  
}

void Registerd_User::diaplayRegisterdDetails(){
	cout<<"User ID : "<< userID <<endl;
	cout<<"Email : " << email <<endl;
    cout<<"Password : " << password <<endl;
    cout<<endl; 
}