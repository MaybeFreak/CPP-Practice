// PASSED ALL TESTS

#include <iostream>
#include <cmath>

using namespace std;

int cockroachSpeed(double speed) {
    return floor(speed * 27.777777777778); // 1km/h = 27.777777777778 cm/s
}

int main() {
    cout << "Enter speed in km/h: ";
    double speed;
    cin >> speed;

    cout << cockroachSpeed(speed);

    return 0;
}