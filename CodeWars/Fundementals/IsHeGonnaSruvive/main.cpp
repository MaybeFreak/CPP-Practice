// PASSED ALL TESTS

#include <iostream>

using namespace std;

bool hero(int bullets, int dragons) {
    return (bullets / dragons) >= 2;
}

int main() {
    cout << "Enter bullets dragons: ";
    int bullets;
    int dragons;
    cin >> bullets >> dragons;

    cout << hero(bullets, dragons);
    return 0;
}