#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(nullptr));
    int result = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "You rolled a " << result << " !";
    return 0;
}