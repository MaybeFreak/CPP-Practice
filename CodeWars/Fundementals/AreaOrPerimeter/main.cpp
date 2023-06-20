// PASSED ALL TESTS

#include <iostream>

using namespace std;

double areaOrPerimeter(double length, double width) {
    if(length == width) return length * width;
    return (length * 2) + (width * 2);
}

int main() {
    cout << "Enter length width: ";
    double length;
    double width;
    cin >> length >> width;

    double result = areaOrPerimeter(length, width);
    cout << result;

    return 0;
}