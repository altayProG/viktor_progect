//start programm
#include "myTel.h"

int main(){
    MyBook mclass("Viktor Yakimeko");
    mclass.show();
    mclass.enter_home_number(6655);
    std::cout << mclass.enter_home_number() << std::endl;
    
    return 0;
}
