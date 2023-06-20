// PASSED ALL TESTS

#include <iostream>

using namespace std;

double getVolumeOfCuboid(double length, double width, double height) {
    return length * width * height;
}

int main() {
    cout << "Enter length width height: ";
    double length;
    double width;
    double height;
    cin >> length >> width >> height;

    double result = getVolumeOfCuboid(length, width, height);
    cout << "Volume is: " << result;

    return 0;
}