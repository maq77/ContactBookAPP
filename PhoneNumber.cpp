#include "PhoneNumber.h"
#include <iostream>
using namespace std;

     void PhoneNumber::getPhone(){
     cout<<"\t\tEnter Phone Number : ";
     cin>> num;
     cout<<"\t\tEnter First Letter of Phone Type (Home , Mobile or Work) : ";
     cin>>PhoneTypeLetter;
     switch(PhoneTypeLetter){
     case 'H':
     case 'h':
        type = "Home";
         break;
     case 'M':
     case 'm':
        type = "Mobile";
         break;
     case 'W':
     case 'w':
        type = "Work";
        break;
     default:
        type = "Null";
        break;
     }

     }
     void PhoneNumber::showPhone(){
     cout<<"\t\tPhone Number : "<<num<<endl;
     cout<<"\t\tType : "<<type<<endl;
     }
     void PhoneNumber::setPhone(int NUM, string TYPE){
     num = NUM;
     type = TYPE;

     }
     int PhoneNumber::findNum(){
     return num;
     }
     string PhoneNumber::findType(){
     return type;
     }
