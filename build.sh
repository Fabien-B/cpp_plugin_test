#!/bin/bash

cmake -S pprzServerSDK/ -B build/sdk -DCMAKE_INSTALL_PREFIX=build/install
cmake --build build/sdk
cmake --install build/sdk

cmake -S simplePlugin/ -B build/sp -DCMAKE_INSTALL_PREFIX=build/install
cmake --build build/sp/


