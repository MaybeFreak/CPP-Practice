#include <iostream>

int main() {
    int a = 2;
    int b = 1;
    int intermidiate = a;

    a = b;
    b = intermidiate;

    std::cout << b;
    return 0;
}