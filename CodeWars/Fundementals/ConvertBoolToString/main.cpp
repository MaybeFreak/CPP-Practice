// PASSED ALL TESTS

#include <iostream>

using namespace std;

string boolToString(bool b) {
    return b ? "true" : "false";
}

int main() {
    cout << boolToString(true);
    return 0;
}