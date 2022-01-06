#include "myTel.h"
MyBook::MyBook(){
    fullName = new char[1];
    fullName[0]= '\0';
    homeNumber = 0;
    workNumber = 0;
    mobileNumber = 0;
    otherInfo = "empty";
}
MyBook::MyBook(const char* Myfullname, ulong homeNumber, ulong workNumber, ulong mobileNumber){
    int lenght = std::strlen(Myfullname);
    fullName = new char[lenght+1];
    std::strcpy(fullName, Myfullname);
    this->homeNumber = homeNumber;
    this->workNumber = workNumber;
    this->mobileNumber = mobileNumber;
    otherInfo = "empty";
}
MyBook::~MyBook(){
    delete[] fullName;
    std::cout << "destructor" << std::endl;
}
int MyBook::enter_home_number(){
    return homeNumber;
}
int MyBook::enter_home_number(ulong number){
    homeNumber = number;
    return homeNumber;
}


void MyBook::show(){
    std::cout << "Full name: " << fullName << std::endl;
    std::cout << "Home number: " << homeNumber << std::endl;
    std::cout << "Work number: " << workNumber << std::endl;
    std::cout << "Mobile number: " << mobileNumber << std::endl;
    std::cout << "Other info " << otherInfo << std::endl;
}
