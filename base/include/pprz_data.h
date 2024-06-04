#pragma once
#include <iostream>

class PprzData {
public:

};

class ACConfig: public PprzData{
public:
    ACConfig(int id): id(id) {
        std::cout << "created AC" << id << std::endl;
    }

private:
    int id;

};
