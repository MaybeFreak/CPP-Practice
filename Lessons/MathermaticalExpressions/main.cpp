#include <iostream>

int main() {
    int x = 10;
    int y = 3;
    int z = x + y; // x - y , x * y , x / y <-- this will result in an int rather than a float, x % y <-- get the remaineder of division 

    // x = x + 5; 
    // ++x, x++ //increment prefix before asigning suffix after
    // --x, x-- //decrement 

    std::cout << z;

    return 0;
}