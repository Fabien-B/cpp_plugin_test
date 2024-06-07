#pragma once
#include "Connector.h"
#include "publicTypes.h"

class SimpleConnector: public Connector {
    virtual const char* getConnectorName();
    virtual void printName();
};

extern "C" PPRZ_EXPORT Connector*  CreateConnector( );
extern "C" PPRZ_EXPORT void  DestroyConnector( Connector* connector );
//__cdecl
