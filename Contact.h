#ifndef CONTACT_H
#define CONTACT_H

#include "PhoneNumber.h"

class Contact
{
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

void getContact();
void setContact(int ID , string FNAME , string LNAME , string EMAIL);
void setPhoneCount(int newcount);
void showContact();
string findFname();
int findId();
string findLname();
string findEmail();
int PhoneCount();
};

#endif // CONTACT_H
