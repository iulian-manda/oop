#pragma once

#include "../domain/Chocolate.h"
#include "../repository/ChocolateRepository.h"
#include "../repository/ChocolateInMemoryRepository.cpp"
#include "../repository/ChocolateFileRepository.cpp"

class ChocolateController {

private:
    ChocolateRepository* repository;
public:
    /*
     * Constructor
     * repository - an instance of the ChocolateRepository
     */
    ChocolateController();

    /*
     * Adds a new Chocolate to repository
     * name - the name of the chocolate
     * type - the type of the chocolate (White/Dark/etc...)
     * price - the price in RON
     */
    void add_chocolate(string name, string type, int price);

    /*
     * Find all chocolates with the given type
     * type - the type of the chocolate (White/Dark/etc...)
     * Returns - a vector of chocolates with the given type
     */
    vector<Chocolate> find_chocolate(const string& type);

};