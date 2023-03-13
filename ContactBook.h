#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include "Contact.h"

class ContactBook
{

private:
Contact a[10]; // contacts with max 10 size
int n=0; ////count contacts
int i=0; //for loop
char ch; /// choice to continue adding contacts
int id;
int delnumber; /// number of deleted contact

public:
void AddContacts();
void DeleteConatct();
void Search();
void DisplayAll();
};

#endif // CONTACTBOOK_H
