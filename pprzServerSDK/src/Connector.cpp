#include "Connector.h"
#include <iostream>

const char *Connector::getConnectorName()
{
    return "Base Connector";
}

void Connector::printName()
{
    std::cout << "Base Connector!" << std::endl;
}
