#include <iostream>

using namespace std;

#include "src/ui/ChocolateUI.h"

int main() {
    auto* ui = new ChocolateUI{};

    ui->startUI();
}
