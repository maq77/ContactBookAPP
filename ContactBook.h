#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include "Contact.h"

class ContactBook
{

private:
Contact a[10]; // contacts with max 10 size
Contact temp; //temprory contact to make switch in order to make alphabitic list based on first name.
int n=0; ////count contacts
//int i=0; //for loop
char ch; /// choice to continue adding contacts
int phone; //search by phone
int id;    /// search by id
int delnumber; /// number of deleted contact

public:
void AddContacts();
void DeleteConatct();
void FindByID();
void FindByPhone();
//void Search();
void DisplayAll();
void SortContacts();
};

#endif // CONTACTBOOK_H
