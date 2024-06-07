#!/bin/bash

cmake -S pprzServerSDK/ -B build/sdk -DCMAKE_INSTALL_PREFIX=build/install -DCMAKE_BUILD_TYPE=Debug
cmake --build build/sdk
cmake --install build/sdk

cmake -S simplePlugin/ -B build/sp -DCMAKE_INSTALL_PREFIX=build/install -DCMAKE_BUILD_TYPE=Debug
cmake --build build/sp/


cmake -S server/ -B build/server -DCMAKE_INSTALL_PREFIX=build/install -DCMAKE_BUILD_TYPE=Debug
cmake --build build/server

