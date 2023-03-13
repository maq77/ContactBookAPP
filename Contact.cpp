#include "Contact.h"
#include <iostream>
using namespace std;


void Contact::getContact(){
cout<<"\t\tEnter id : " ; cin>>id;
cout<<"\t\tEnter First name : " ; cin>>fname;
cout<<"\t\tEnter Last name : " ; cin>>lname;
cout<<"\t\tEnter Email : " ; cin>>email;
for(;z<10;){
    do{
    b[z].getPhone();
    z++;
    phonecount++;
    cout<<"\t\tDo Yo want to Add Another Phone Number ?(Y,N) : "<<endl;
    cout<<"\t\t >>>> ";cin >> ch;
    }while(ch == 'Y' || ch == 'y' );
    break;
    }


}
void Contact::setContact(int ID , string FNAME , string LNAME , string EMAIL){

id = ID ;
fname = FNAME;
lname =LNAME;
email = EMAIL;



}
void Contact::setPhoneCount(int newcount){

phonecount = newcount;

}

void Contact::showContact(){
cout<<"\t\tId : " <<id<<endl;
cout<< "\t\tFirst Name : "<<fname<<endl;
cout<< "\t\tLast Name : "<<lname<<endl;
cout<< "\t\tEmail Name : "<<email<<endl;
for(int z=0;z<phonecount;z++){
   b[z].showPhone();
   }

}

string Contact::findFname(){
return fname;
}
int Contact::findId(){
return id;
}
string Contact::findLname(){
return lname;
}
string Contact::findEmail(){
return email;
}
int Contact::PhoneCount(){
return phonecount;
}
