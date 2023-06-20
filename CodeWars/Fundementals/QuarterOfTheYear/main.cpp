// PASSED ALL TESTS

#include <iostream>
#include <cmath>

using namespace std;

int quarterOf(double month) {
    return ceil(month / 3);
}

int main() {
    cout << "Input month as int: ";
    int month;
    cin >> month;

    int result = quarterOf(month);
    cout << "Month " << month << " is in quarter " << result;

    return 0;
}