CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)


ADD_EXECUTABLE(test
    test.cpp
    header/Entity_test.h
    header/Item_test.h
    header/prototypes/prototype_tests.h
    header/inventory_tests.h
    header/battle/attack_strategy_tests.h
)

ADD_EXECUTABLE(main
    src/main.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
