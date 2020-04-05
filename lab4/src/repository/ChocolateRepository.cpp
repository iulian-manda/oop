#include "ChocolateRepository.h"
ChocolateRepository::ChocolateRepository() {
    chocolates = {};
}

void ChocolateRepository::add_chocolate(string name, string type, int price) {
    chocolates.emplace_back(Chocolate(name, type, price));
}

vector<Chocolate> ChocolateRepository::get_all() {
    return chocolates;
}