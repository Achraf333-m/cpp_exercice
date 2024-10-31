#include <iostream>
#include "rectangle.cpp"

int get_user_data(int, int);

int main() {
    Rectangle rectangle_1;
    rectangle_1.set_measurements();
    std::cout << rectangle_1.calculate_area();


    return 0;
}
