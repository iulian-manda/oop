#pragma once

#include "../controller/ChocolateController.h"
#include "../domain/Chocolate.h"

class ChocolateUI {

private:
    ChocolateController controller;
    static void show_menu();
    void add_chocolate();
    void find_by_type();

public:

    ChocolateUI();
    /*
     * Starts the UI with menu
     */
    void startUI();

};