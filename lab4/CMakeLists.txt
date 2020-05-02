cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 14)

project(lab4)

set(SOURCE_FILES
        src/domain/Chocolate.cpp
        src/domain/Chocolate.h
        src/repository/ChocolateRepository.h
        src/repository/ChocolateInMemoryRepository.cpp
        src/repository/ChocolateFileRepository.cpp
        src/controller/ChocolateController.h
        src/controller/ChocolateController.cpp
        src/ui/ChocolateUI.h
        src/ui/ChocolateUI.cpp
        src/exceptions/FileNotFoundException.cpp
        main.cpp)
add_executable(lab_4_run ${SOURCE_FILES})
FILE(COPY resources/chocolates.csv DESTINATION "${CMAKE_BINARY_DIR}/resources")
FILE(COPY test/resources/chocolates.csv DESTINATION "${CMAKE_BINARY_DIR}/test/resources")

add_subdirectory(test)