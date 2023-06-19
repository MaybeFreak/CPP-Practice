#include <iostream>

using namespace std; 

int main() {
    cout << "Enter temperature in Fahrenheit: ";
    double tempInF;
    cin >> tempInF;

    // (77°F − 32) / 1.8 = 25°C formula to convert
    double tempInC = (tempInF - 32) / 1.8;
    cout << tempInF << "ºF is "<< tempInC <<"ºC";

    return 0;
}