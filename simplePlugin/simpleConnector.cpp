#include "simpleConnector.h"
#include <iostream>

const char *SimpleConnector::getConnectorName()
{
    return "Simple Connector";
}

void SimpleConnector::printName()
{
    std::cout << "Simple Connector!" << std::endl;
}


Connector*  CreateConnector() {
    return new SimpleConnector();
}

void  DestroyConnector(Connector* connector) {
    delete connector;
}