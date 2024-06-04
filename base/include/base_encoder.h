#pragma once
#include "pprz_data.h"

template<typename U>
class BaseEncoder {
public:

template<typename T>
virtual U encode(T data) = 0;

private:

};
