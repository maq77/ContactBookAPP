#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class PhoneNumber{
private:
     int num;
     string type;
public:

     void getPhone(){
     cout<<"\t\tEnter Phone Number : ";
     cin>> num;
     cout<<"\t\tEnter Phone Type (Home , Mobile or Work) : ";
     cin>>type;
     }
     void showPhone(){
     cout<<"\t\tPhone Number : "<<num<<endl;
     cout<<"\t\tType : "<<type<<endl;
     }
     void setPhone(int NUM, string TYPE){
     num = NUM;
     type = TYPE;

     }
     int findNum(){
     return num;
     }
     string findType(){
     return type;
     }


};
class Conatct{
private:
string fname;
string lname;
string email;
int id;
////int phone;
int phonecount=0;
int z=0;
char ch;
//PhoneNumber b[10];

public:



PhoneNumber b[10];

void getContact(){
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
void setContact(int ID , string FNAME , string LNAME , string EMAIL){

id = ID ;
fname = FNAME;
lname =LNAME;
email = EMAIL;



}
void setPhoneCount(int newcount){

phonecount = newcount;

}

void showContact(){
cout<<"\t\tId : " <<id<<endl;
cout<< "\t\tFirst Name : "<<fname<<endl;
cout<< "\t\tLast Name : "<<lname<<endl;
cout<< "\t\tEmail Name : "<<email<<endl;
for(int z=0;z<phonecount;z++){
   b[z].showPhone();
   }

}

string findFname(){
return fname;
}
int findId(){
return id;
}
string findLname(){
return lname;
}
string findEmail(){
return email;
}
int PhoneCount(){
return phonecount;
}
};
class ConatctBook{
private:
Conatct a[10]; // contacts with max 10 size
int n=0; ////count contacts
int i=0; //for loop
char ch; /// choice to continue adding contacts
int id;
int delnumber; /// number of deleted contact

public:
void AddContacts(){
    ////Done Adding Contacts to list of Contacts at Book
    //Max is 10 Contacts according to array size

    for(;i<10;){
    do{
    a[i].getContact();
    i++;
    n++;
    cout<<"\t\t------------------------------------------ "<<endl;
    cout<<"\t\tDo Yo want to Add Another Contact ?(Y,N) : "<<endl;
    cout<<"\t\t >>>> ";cin >> ch;
    }while(ch == 'Y' || ch == 'y' );
    break;
    }

}

void DeleteConatct(){
cout<<"\t\tEnter id : " ; cin>>id;
for(int j=0;j<n;j++){
int PhoneCount = a[j+1].PhoneCount();
if(a[j].findId() == id){
     delnumber = j ; ////delete number index
     for(;(j+1)<n;j++){
        a[j].setContact(a[j+1].findId(),a[j+1].findFname(),a[j+1].findLname(),a[j+1].findEmail());
        for(int l=0;l<PhoneCount;l++){
        a[j].b[l].setPhone(a[j+1].b[l].findNum(), a[j+1].b[l].findType());
        a[j].setPhoneCount(PhoneCount);
        }
     }

     n--;
    cout <<"\t\tDeleted Sucssefully !"<<endl;
  break;

}
else{
    cout << "\t\tDidn't Find ID !"<<endl;

}
}



}
void Search(){
cout<<"\t\tEnter id : " ; cin>>id;
for(int j=0;j<n;j++){

if(a[j].findId() == id){
    cout <<"\t\tFound Successfully !"<<endl;
    a[j].showContact();
    break;
}
else{

    cout << "\t\tDidn't Find ID !"<<endl;
}
}



}
void DisplayAll(){
   cout<< "\t\t The Number of Contacts is : " << n << endl;
   for(int i=0;i<n;i++){
   a[i].showContact();
   cout<<"\t\t------------------------------------------ "<<endl;
   }
}
};

int main()
{
    int choose;
    char ch;
    char bye = 1 ;
    ConatctBook a;
    cout<<"\n \t\t---------------Contact App---------------"<<endl;
    do{
    cout<<"\t\t----------- Welcome ! ---------------"<<endl;
    cout<<"\t\t 1- Add Contact "<<endl;
    cout<<"\t\t 2- Show All Contacts "<<endl;
    cout<<"\t\t 3- Delete Contact "<<endl;
    cout<<"\t\t 4- Search For Contact "<<endl;
    cout<<"\t\t 5- Exit "<<endl;
    cout<<"\t\t >>>> ";cin>>choose;
    switch(choose){
    case 1 :
    cout<<"\t\t New Contact"<<endl;
    cout<<""; a.AddContacts();
    system("CLS");
    break;
    case 2 :
    cout<<"\t\t Show All Contacts"<<endl;
    cout<<"\t\t "; a.DisplayAll();
    system("CLS");
    break;
    case 3 :
    cout<<"\t\t Delete Contact"<<endl;
    cout<<"\t\t "; a.DeleteConatct();
    system("CLS");
    break;
    case 4 :
    cout<<"\t\t Search For Contact"<<endl;
    cout<<"\t\t "; a.Search();
    system("CLS");
    break;
    }
    }while(choose != 5);
    cout<<"\t\tThanks For Using My Program ! .. This Was Project For FCI Zagazig University  "<<
    "\n\t\tCopyrights Reserved to Mohamed Amin <3 "<<
    "\n\t\tKindly Visit My GitHub : https://github.com/maq77/ "<<
    "\n\t\tUsername: maq77 "<<endl;

    return 0;
}
