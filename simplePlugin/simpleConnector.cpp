#include "simpleConnector.h"
#include <iostream>

const char *Connector::getConnectorName()
{
    return "Simple Connector";
}

void Connector::printName()
{
    std::cout << "Simple Connector!" << std::endl;
}
