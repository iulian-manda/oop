#include "ChocolateController.h"
#include <iostream>
using namespace std;

ChocolateController::ChocolateController() {
    this->repository = new ChocolateFileRepository{"resources/chocolates.csv"};
//    this->repository = new ChocolateInMemoryRepository{};
}

void ChocolateController::add_chocolate(string name, string type, int price) {
    repository->add_chocolate(name, type, price);
}

vector<Chocolate> ChocolateController::find_chocolate(const string& type) {
    vector<Chocolate> result = {};
    for (Chocolate chocolate : repository->get_all()) {
        if (chocolate.get_type() == type) {
            result.emplace_back(chocolate);
        }
    }
    return result;
}