#!/bin/bash 

rm ChaDEMO

g++ -o ChaDEMO main.cpp ThSafeData.cpp ChademoLogic.cpp -Wall -Werror -std=c++17
