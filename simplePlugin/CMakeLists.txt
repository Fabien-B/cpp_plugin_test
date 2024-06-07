cmake_minimum_required(VERSION 3.13)
project(simplePlugin)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PprzServerSDK)

SET(SOURCES_FILES
    simpleConnector.cpp
)

SET(HEADERS_FILES
    simpleConnector.h
)

add_library(${PROJECT_NAME} SHARED ${SOURCES_FILES})

target_link_libraries(${PROJECT_NAME}
    PprzServerSDK
)


