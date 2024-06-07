#pragma once
#include "Encoder.h"
#include "publicTypes.h"

class SimpleEncoder: public Encoder {
    virtual void serialize(std::shared_ptr<Waypoint> wp) {std::cout << "simply serialize WP!" << std::endl;}
    virtual void serialize(std::shared_ptr<FlightPlan> wp) {std::cout << "simply serialize FP!" << std::endl;}
};

extern "C" PPRZ_EXPORT Encoder*  CreateEncoder( );
extern "C" PPRZ_EXPORT void  DestroyEncoder( Encoder* encoder );
