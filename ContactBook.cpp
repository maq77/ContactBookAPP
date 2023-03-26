#include "ContactBook.h"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

void ContactBook::AddContacts(){
    ////Done Adding Contacts to list of Contacts at Book
    //Max is 10 Contacts according to array size

    for(int i=0;i<10;){
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
void ContactBook::SortContacts(){
for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(a[j-1].findFletter()>a[j].findFletter()){
                temp.setContact(a[j].findId(),a[j].findFname(),a[j].findLname(),a[j].findEmail()); /// swapping Contacts in Temp Contact
                a[j].setContact(a[j-1].findId(),a[j-1].findFname(),a[j-1].findLname(),a[j-1].findEmail());
                a[j-1].setContact(temp.findId(),temp.findFname(),temp.findLname(),temp.findEmail());
                temp.setPhoneCount(a[j].PhoneCount());
                for(int l=0;l<a[j].PhoneCount();l++){
                    temp.b[l].setPhone(a[j].b[l].findNum(),a[j].b[l].findType());
                }
                a[j].setPhoneCount(a[j-1].PhoneCount());
                for(int l=0;l<a[j].PhoneCount();l++){
                    a[j].b[l].setPhone(a[j-1].b[l].findNum(),a[j-1].b[l].findType());
                }
                a[j-1].setPhoneCount(temp.PhoneCount());
                for(int l=0;l<a[j-1].PhoneCount();l++){
                    a[j-1].b[l].setPhone(temp.b[l].findNum(),temp.b[l].findType());
                }
            }
        }
    }
}

void ContactBook::DeleteConatct(){
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
void ContactBook::FindByPhone(){
cout<<"\t\tEnter Phone Number : " ; cin>>phone;
bool isFound = false;

for(int j=0;j<n;j++){
for(int l=0;l<a[j].PhoneCount();l++){
if(a[j].b[l].findNum() == phone){
    cout <<"\t\tFound Successfully !"<<endl;
    a[j].showContact();
    isFound = true;
    break;
}
}
}
if (isFound == false){

    cout << "\t\tDidn't Find Phone Number !"<<endl;

}

}
void ContactBook::FindByID(){

cout<<"\t\tEnter id : " ; cin>>id;
bool isFound = false;
for(int j=0;j<n;j++){

if(a[j].findId() == id){
    cout <<"\t\tFound Successfully !"<<endl;
    a[j].showContact();
    break;
}

}
if(isFound == false){

    cout << "\t\tDidn't Find ID !"<<endl;

}
}
//void ContactBook::Search(){



//}

void ContactBook::DisplayAll(){
   cout<< "\t\t The Number of Contacts is : " << n << endl;
   for(int i=0;i<n;i++){
   a[i].showContact();
   cout<<"\t\t------------------------------------------ "<<endl;
   }
}
