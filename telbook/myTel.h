#ifndef MYTEL_H
#define MYTEL_H
#include <iostream>
#include <string>
#include <cstring>
class MyBook{
private:
    char* fullName;
    ulong homeNumber;
    ulong workNumber;
    ulong mobileNumber;
    std::string otherInfo;
public:
    MyBook();
    MyBook(const char* Myfullname, ulong homeNumber = 0, ulong workNumber = 0, ulong mobileNumber = 0);
    ~MyBook();
    int enter_home_number();
    int enter_home_number(ulong number);
    void show();    
};

#endif