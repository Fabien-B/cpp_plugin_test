#pragma once
#include <iostream>

class Encoder {
public:
    virtual void whoami() {std::cout << "Encoder!" << std::endl;}    
};
