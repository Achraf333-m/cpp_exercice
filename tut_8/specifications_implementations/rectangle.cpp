#include "rectangle.h"


Rectangle::Rectangle() {
    width = 0;
    height = 0;
}

void Rectangle::set_measurements() {
    std::cout << "Enter your width: ";
    std::cin >> width;
    std::cout << "Enter your height: ";
    std::cin >> height;
}

int Rectangle::calculate_area() {
    return width * height;
}