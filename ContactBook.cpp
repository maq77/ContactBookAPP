#include "ContactBook.h"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

void ContactBook::AddContacts(){
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
void ContactBook::Search(){
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
void ContactBook::DisplayAll(){
   cout<< "\t\t The Number of Contacts is : " << n << endl;
   for(int i=0;i<n;i++){
   a[i].showContact();
   cout<<"\t\t------------------------------------------ "<<endl;
   }
}
