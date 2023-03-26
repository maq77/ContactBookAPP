#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <string>
using namespace std;

class PhoneNumber{
private:
     int num;
     string type;
     char PhoneTypeLetter;
public:

     void getPhone();
     void showPhone();
     void setPhone(int NUM, string TYPE);
     int findNum();
     string findType();


};
#endif // PHONENUMBER_H
