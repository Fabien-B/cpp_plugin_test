cmake_minimum_required(VERSION 3.13)
project(server)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PprzServerSDK)

SET(SOURCES_FILES
    main.cpp
)

# SET(HEADERS_FILES
#     simpleConnector.h
# )

add_executable(${PROJECT_NAME} ${SOURCES_FILES})

target_link_libraries(${PROJECT_NAME}
    PprzServerSDK
)


