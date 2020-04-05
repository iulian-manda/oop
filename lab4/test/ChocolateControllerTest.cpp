#include "../src/controller/ChocolateController.h"
#include "gtest/gtest.h"

TEST(ChocolateControllerTest, AddAndFindChocolate) {
    ChocolateController controller = ChocolateController();

    controller.add_chocolate("Name", "Type", 10);

    for(Chocolate chocolate : controller.find_chocolate("Type")) {
        ASSERT_EQ("Name", chocolate.get_name());
        ASSERT_EQ("Type", chocolate.get_type());
        ASSERT_EQ(10, chocolate.get_price());
    }
}