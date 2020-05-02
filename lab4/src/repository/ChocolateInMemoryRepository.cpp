#include "ChocolateRepository.h"

class ChocolateInMemoryRepository: public ChocolateRepository {
private:
    vector<Chocolate> chocolates;
public:
    ChocolateInMemoryRepository() : ChocolateRepository(){
        chocolates = {};
    }
    void add_chocolate(string name, string type, int price) override {
        chocolates.emplace_back(name, type, price);
    }
    vector<Chocolate> get_all() override {
        return chocolates;
    }
};
