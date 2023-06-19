#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr)); // time(nullptr) = time since Jan 1 1970
    int number = rand() % 20;
    cout << number;

    return 0;
}