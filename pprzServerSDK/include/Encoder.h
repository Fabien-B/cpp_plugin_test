#pragma once
#include <iostream>
#include "publicTypes.h"
#include "memory"

class Encoder {
public:
    virtual void whoami() {std::cout << "Encoder!" << std::endl;}
    
    virtual void serialize(std::shared_ptr<Waypoint> wp) {std::cout << "serialize WP!" << std::endl;}
    virtual void serialize(std::shared_ptr<FlightPlan> wp) {std::cout << "serialize FP!" << std::endl;}
};
