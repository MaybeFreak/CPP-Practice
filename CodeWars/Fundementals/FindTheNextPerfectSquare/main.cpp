// PASSES ALL TESTS 

#include <iostream>
#include <cmath>

using namespace std;

long int findNextSquare(long int sq) {
    auto test = sqrt(sq);
    return fmod(test, 1.0) == 0 ? pow((test + 1), 2.0) : -1;
}

int main() {
    cout << findNextSquare(121);
    return 0;
}