#include <iostream>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include "ContactBook.h"

using namespace std;

int main()
{
    int choose;
    char ch;
    char bye = 1 ;
    ContactBook a;
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
    cout<<"\t\t\t --------------- New Contact ---------------"<<endl;
    cout<<""; a.AddContacts();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(3);
    system("cls");
    break;
    case 2 :
    cout<<"\t\t\t --------------- Show All Contacts ---------------"<<endl;
    cout<<"\t\t "; a.DisplayAll();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(3);
    system("cls");
    break;
    case 3 :
    cout<<"\t\t\t --------------- Delete Contact ---------------"<<endl;
    cout<<"\t\t "; a.DeleteConatct();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(3);
    system("cls");
    break;
    case 4 :
    cout<<"\t\t\t --------------- Search For Contact ---------------"<<endl;
    cout<<"\t\t "; a.Search();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(3);
    system("cls");
    break;
    }
    }while(choose != 5);
    cout<<"\t\tThanks For Using My Program ! .. This Was Project For FCI Zagazig University  "<<
    "\n\t\tCopyrights Reserved to Mohamed Amin <3 "<<
    "\n\t\tKindly Visit My GitHub : https://github.com/maq77/ "<<
    "\n\t\tUsername: maq77 "<<endl;

    return 0;
}
