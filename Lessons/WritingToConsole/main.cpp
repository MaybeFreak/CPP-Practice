#include <iostream>

using namespace std; // now we don't need to std:: to access the namespace

int main() {
    int x = 10;
    int y = 20;

    // std::cout << "x = ";
    // std::cout << x;

    cout << "x = " << x << endl 
         << "y = " << y;
    return 0;
}