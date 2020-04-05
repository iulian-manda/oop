#pragma once

#include "string"
using namespace std;

class Chocolate {

private:
    string name;
    string type;
    int price;

public:

    //Constructor
    Chocolate(string name, string type, int price);

    string get_name();
    string get_type();
    int get_price();
    void set_price(int price);
};