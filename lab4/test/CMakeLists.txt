project(test)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(SOURCE_FILES
        ../src/domain/Chocolate.cpp
        ../src/domain/Chocolate.h
        ../src/repository/ChocolateRepository.h
        ../src/repository/ChocolateRepository.cpp
        ../src/controller/ChocolateController.h
        ../src/controller/ChocolateController.cpp)
add_executable(Google_Tests_run ChocolateControllerTest.cpp ${SOURCE_FILES})
target_link_libraries(Google_Tests_run gtest gtest_main)