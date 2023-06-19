#include <iostream>

using namespace std;

int main() {
    int number = 1'000'000;
    short another = number; // with {} wont compile
    cout << another;
    return 0;
}