#include "Chocolate.h"

Chocolate::Chocolate(string name, string type, int price) {
    this->name = name;
    this->type = type;
    this->price = price;
}

string Chocolate::get_name() {
    return name;
}

string Chocolate::get_type() {
    return type;
}

int Chocolate::get_price() {
    return price;
}

void Chocolate::set_price(int price) {
    this->price = price;
}