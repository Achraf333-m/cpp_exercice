#include <iostream>
using namespace std;

float getFine(float, float, float);

int main()
{
    float speed_limit, driver_speed, fine{0};

    cout << "Enter the speed limit: ";
    cin >> speed_limit;

    cout << "Enter the driver's speed: ";
    cin >> driver_speed;

    fine = getFine(driver_speed, speed_limit, fine);

    if (fine > 1) {
        cout << "Fine: $" << fine << "." << endl;
    } else if (fine == 1) {
        cout << "You are driving within the limit, no fine :)!" << endl;
    } else if (!fine) {
        cout << "You are driving too slow, but no fine." << endl;
    }

    return 0;
}

float getFine(float speed, float limit, float fine)
{
    float speed_upper_range = limit * 1.05;
    float speed_lower_range = limit * 0.95;
    float speed_low10pc_range = limit * 0.9;
    float speed_20pc_range = limit * 1.2;

    bool isNoFine = (speed < speed_upper_range) && (speed > speed_lower_range);
    bool is50fine = (speed > speed_upper_range) && (speed < speed_20pc_range);
    bool is200fine = speed > speed_20pc_range;
    bool isTooSloww = speed < speed_low10pc_range;

    if (isNoFine) {
        fine = 1;
    } else if (is50fine) {
        fine = 50;
    } else if (is200fine) {
        fine = 200;
    } else if (isTooSloww) {
        fine = 0;
    }
   

    return fine;
}