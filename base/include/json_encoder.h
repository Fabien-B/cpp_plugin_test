#pragma once
#include "base_encoder.h"
#include "pprz_data.h"
#include "string"

class JsonEncoder: public BaseEncoder<std::string> {
    
    std::string encode(int a) {return "plop";}
    std::string encode(std::string s) {
        return s;
    }


};
