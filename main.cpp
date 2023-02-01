#include <iostream>

#include "ThSafeData.h"
#include "ChademoLogic.h"


int main(){
    ThSafeValue<int> valU;
    std::cout << "U ST:" << valU << "V\n";
    valU.set(220);
    ThSafeValue<float> valCurr;
    valCurr.set(5.5);

    std::cout << "U:" << valU << "V\n";
  
    std::cout << "I:" << valCurr << "A\n";

    //hw_init();
    return 0;
}