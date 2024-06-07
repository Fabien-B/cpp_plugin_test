#include <dlfcn.h>
#include <iostream>
#include "Connector.h"

constexpr auto libpath = "build/sp/libsimplePlugin.so";

Connector* (*create)();
void (*destroy)(Connector*);


int main() {

    std::cout << "Bonjour!" << std::endl;

    auto c = Connector();

    c.printName();

    void* handle = dlopen(libpath, RTLD_LAZY);


    create = (Connector* (*)())dlsym(handle, "CreateConnector");
    destroy = (void (*)(Connector*))dlsym(handle, "DestroyConnector");

    auto coco = create();
    coco->printName();
    destroy(coco);

    return 0;
}
