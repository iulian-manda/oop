#include "ChocolateRepository.h"
#include "../exceptions/FileNotFoundException.cpp"
#include <fstream>
#include <sstream>
using namespace std;

class ChocolateFileRepository: public ChocolateRepository {
private:
    string fileName;
    static Chocolate split(const string& line, char delimiter) {
        string buffer;
        string result[3];
        int size = 0;
        for (char c : line) {
            if (c != delimiter) {
                buffer += c;
            } else if(!buffer.empty()) {
                result[size++] = buffer;
                buffer = "";
            }
        }
        if (!buffer.empty()) {
            result[size++] = buffer;
        }
        stringstream priceString(result[2]);
        int price = 0;
        priceString >> price;
        return Chocolate(result[0], result[1], price);
    }

public:
    explicit ChocolateFileRepository(string fileName) : ChocolateRepository(){
        ifstream file(fileName);
        if (!file.is_open()) {
            throw FileNotFoundException(fileName);
        }
        file.close();
        this->fileName = fileName;
    }
    void add_chocolate(string name, string type, int price) override {
        ofstream file (this->fileName, std::ios_base::app);
        file << '\n' << name << ',' << type << ',' << price;
        file.close();
    }
    vector<Chocolate> get_all() override {
        ifstream file(this->fileName);
        vector<Chocolate> chocolates = {};
        string line;
        if (!file.is_open()) {
            return chocolates;
        }
        while(getline(file, line)) {
            Chocolate chocolate = split(line, ',');
            chocolates.emplace_back(chocolate);
        }
        file.close();
        return chocolates;
    }
};
