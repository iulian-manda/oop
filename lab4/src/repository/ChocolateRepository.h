#pragma once

#include "vector"
#include "ChocolateRepository.h"
#include "../domain/Chocolate.h"
using namespace std;

class ChocolateRepository {

private:
    vector<Chocolate> chocolates;

public:
    explicit ChocolateRepository();
    /*
     * Adds a chocolate to the repository
     * name - the name of the chocolate
     * type - the type of the chocolate (White/Dark/etc...)
     * price - the price in RON
     */
    void add_chocolate(string name, string type, int price);
    /*
     * Gets all chocolates from repository
     */
    vector<Chocolate> get_all();

};
