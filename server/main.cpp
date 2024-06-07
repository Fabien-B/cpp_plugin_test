#include <iostream>
#include "Connector.h"

int main() {

    std::cout << "Bonjour!" << std::endl;

    auto c = Connector();

    c.printName();

    return 0;
}
