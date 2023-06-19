// PASSED ALL TESTS

#include <iostream>
#include <cmath>

using namespace std;

char getGrade(int a, int b, int c) {
    int avg = round((a + b + c) / 3);

    switch(avg) {
        case 90 ... 100:
            return 'A';
            break;
        case 80 ... 89:
            return 'B';
            break;
        case 70 ... 79:
            return 'C';
            break;
        case 60 ... 69:
            return 'D';
            break;
        case 0 ... 59:
            return 'F';
            break;
    }
}

int main() {
    cout << "Please input the 3 grades: ";
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    char grade = getGrade(a, b, c);
    cout << grade;

    return 0;
}