#include <dlfcn.h>
#include <iostream>
#include "Connector.h"
#include "Encoder.h"
#include "memory"
#include "publicTypes.h"


constexpr auto libpath = "build/sp/libsimplePlugin.so";

typedef Connector*(*ConnectorCreator)();
typedef void(*ConnectorDestructor)(Connector*);

typedef Encoder*(*EncoderCreator)();
typedef void(*EncoderDestructor)(Encoder*);


int main() {

    std::cout << "Bonjour!" << std::endl;

    auto c = Connector();

    c.printName();

    void* handle = dlopen(libpath, RTLD_LAZY);


    auto create_connector = (ConnectorCreator)dlsym(handle, "CreateConnector");
    auto destroy_connector = (ConnectorDestructor)dlsym(handle, "DestroyConnector");

    auto create_encoder = (EncoderCreator)dlsym(handle, "CreateEncoder");
    auto destroy_encoder = (EncoderDestructor)dlsym(handle, "DestroyEncoder");


    if(create_connector != nullptr and destroy_connector != nullptr) {
        auto coco = create_connector();
        coco->printName();
        destroy_connector(coco);
    }

    if(create_encoder != nullptr and destroy_encoder != nullptr) {
        auto encoder = create_encoder();
        auto wp = std::make_shared<Waypoint>();
        auto fp = std::make_shared<FlightPlan>();
        encoder->serialize(wp);
        encoder->serialize(fp);
        destroy_encoder(encoder);
    }

    return 0;
}
