#include <iostream>

using namespace std;

double basicOp(char op, double val1, double val2) {
    switch(op) {
        case '+':
            return val1 + val2;
            break;
        case '-':
            return val1 - val2;
            break;
        case '*':
            return val1 * val2;
            break;
        case '/':
            return val1 / val2;
            break;
        default:
            break;
    }
    return 0;
}

int main() {
    cout << "Enter Value1 Operation Value2: ";
    double val1;
    double val2;
    char op;
    cin >> val1 >> op >> val2;

    cout << basicOp(op, val1, val2);

    return 0;
}