#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter the radius of the circle: ";
    double r;
    cin >> r;

    double area = M_PI * pow(r, 2);
    cout << "The area of the circle with radius of " << r << " is: "<< area;

    return 0;
}
