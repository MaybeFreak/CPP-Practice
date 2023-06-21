// PASSES ALL TESTS

#include <iostream>
#include <cmath>

using namespace std;

int litres(double time) {
    return floor(time * 0.5);
}

int main() {
    cout << litres(1.4);
    return 0;
}