#include "ChocolateUI.h"
#include "iostream"
using namespace std;

ChocolateUI::ChocolateUI() {
    this->controller = ChocolateController();
}

void ChocolateUI::show_menu() {
    cout<<"\n1. Add chocolate\n2. Find chocolate by type\n0. Exit\n";
}

void ChocolateUI::add_chocolate() {
    string name, type;
    int price;
    cout<<"name: ";
    cin>>name;
    cout<<"type: ";
    cin>>type;
    cout<<"price(RON): ";
    cin>>price;

    controller.add_chocolate(name, type, price);
}

void ChocolateUI::find_by_type() {
    string type;
    cout<<"type: ";
    cin>>type;

    for(Chocolate chocolate : controller.find_chocolate(type)) {
        cout<<chocolate.get_name()<<" "<<chocolate.get_type()<<" "<<chocolate.get_price()<<" RON"<<endl;
    }
}

void ChocolateUI::startUI() {
    int input = -1;
    while (input != 0) {
        show_menu();
        cin>>input;
        switch (input) {
            case 1:
                add_chocolate();
                break;
            case 2:
                find_by_type();
                break;
            default:
                break;
        }
    }
}
