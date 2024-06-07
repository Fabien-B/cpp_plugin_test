#include "simpleEncoder.h"
#include <iostream>


Encoder*  CreateEncoder() {
    return new SimpleEncoder();
}

void  DestroyEncoder(Encoder* encoder) {
    delete encoder;
}
