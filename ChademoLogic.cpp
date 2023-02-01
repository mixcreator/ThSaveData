#include "ChademoLogic.h"

#include <vector>
#include <thread>

#if 0
auto ReadChademoRoutine = []
{

};
#endif

auto WriteChademoRoutine = []
{

};

auto PS_ControlRoutine = []
{

};


void hw_init(){
    // Start threads !!!
    //std::thread rd(ReadChademoRoutine);
    std::thread rd([]{
                   });
    std::thread wr(WriteChademoRoutine);
    std::thread psControl(PS_ControlRoutine);
}