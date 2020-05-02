#pragma once

#include "vector"
#include "ChocolateRepository.h"
#include "../domain/Chocolate.h"
using namespace std;

class ChocolateRepository {

public:
    /*
     * Adds a chocolate to the repository
     * name - the name of the chocolate
     * type - the type of the chocolate (White/Dark/etc...)
     * price - the price in RON
     */
    virtual void add_chocolate(string name, string type, int price) = 0;
    /*
     * Gets all chocolates from repository
     */
    virtual vector<Chocolate> get_all() = 0;

};
