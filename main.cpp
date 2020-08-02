//main.cpp -- only for test jackknife class
//

#include <iostream>

#include "jackknife.h"
//using namespace scj;
int main(){
    std::cout << "Hello world!" << "\n";
    double mydata[6]={1,2,3,4,5,6};
    
    scj::jackknife myjackknife = scj::jackknife(mydata, 2, 3);
    std::cout << "the average is " << myjackknife.average(1) << "\n";
    std::cout << "the error is " << myjackknife.error(1) << "\n";
    return 0;
}
